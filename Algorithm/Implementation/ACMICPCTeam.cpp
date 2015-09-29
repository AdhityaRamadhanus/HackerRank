#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,M;
    cin>>N>>M;
    vector<string> arrays(N);
    for(int i=0;i<N;i++){
        cin>>arrays[i];
    }
    int max_topics=0;
    int max_teams=0;
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            int currmax_topics=0;
            for(int k=0;k<M;k++){
                if (arrays[i][k]=='1' || arrays[j][k]=='1'){
                    currmax_topics++;
                }
            }
            if (currmax_topics>max_topics){
                max_teams=1;
                max_topics=currmax_topics;
            }
            else if (currmax_topics==max_topics){
                max_teams++;
            }
        }
    }
    cout<<max_topics<<endl;
    cout<<max_teams<<endl;
    return 0;
}
