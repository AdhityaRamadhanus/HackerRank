#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<vector<int> > adjlist;
vector<long long> Tokens;
vector<long long> TotalSum;
long long maxpath=0;
int RootReal;
long long Tot(int Root,int Parent){
    if (adjlist[Root].size()==0){
        TotalSum[Root] = Tokens[Root];
        return Tokens[Root];
    }
    long long maxcurrent=Tokens[Root];
    for(int i=0;i<adjlist[Root].size();i++){
        long long x = Tot(adjlist[Root][i],Root);
        maxcurrent+=x;
    }
    TotalSum[Root]=maxcurrent;
    return TotalSum[Root];
}
void Trav(int Root,int Parent){
    vector<long long> TotalSub(adjlist[Root].size()+1);
    long long maxcurrent = Tokens[Root];
    if (Parent==-1) TotalSub[0]=0;
    else{
        TotalSub[0] = TotalSum[RootReal] - TotalSum[Root];
        maxcurrent+=TotalSub[0];
    }
    for(int i=0;i<adjlist[Root].size();i++){
        TotalSub[i+1]=TotalSum[adjlist[Root][i]];
        maxcurrent+=TotalSub[i+1];
    }
    maxpath = max(maxpath,maxcurrent-*max_element(TotalSub.begin(),TotalSub.end()));
    for(int i=0;i<adjlist[Root].size();i++){
        Trav(adjlist[Root][i],Root);
    }
}
int main() {
    int N;
    cin>>N;
    Tokens.push_back(0);
    TotalSum.push_back(0);
    vector<int> y1;
    adjlist.push_back(y1);
    for(int i=0;i<N;i++){
        int x;
        vector<int> y;
        cin>>x;
        Tokens.push_back(x);
        TotalSum.push_back(0);
        adjlist.push_back(y);
    }
    for(int i=0;i<N-1;i++){
        int src,dest;
        cin>>src>>dest;
        adjlist[src].push_back(dest);
    }
    Tot(1,-1);
    RootReal=1;
    Trav(1,-1);
    cout<<maxpath<<endl;
    return 0;
}