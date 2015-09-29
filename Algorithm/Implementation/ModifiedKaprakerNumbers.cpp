#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;


int main() {
    int p,q;
    cin>>p>>q;
    vector<int> soln;
    for(int i=p;i<=q;i++){
        long long square = (long long) i*i;
        stringstream ss;
        ss << square;
        string sq = ss.str();
        string left = sq.substr(0,sq.length()/2);
        string right = sq.substr(sq.length()/2,sq.length()-sq.length()/2);
        //cout<<left<<" "<<right<<endl;
        if (atoi(left.c_str())+atoi(right.c_str()) == i){
           soln.push_back(i);
        }
    }
    if (soln.size()==0) cout<<"INVALID RANGE"<<endl;
    else {
        for(int i=0;i<soln.size();i++){
            cout<<soln[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}