#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,N;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<int> outbridge(N+1);
        vector<bool> visited(N+1);
        for(int i=1;i<=N;i++){
            cin>>outbridge[i];
        }
        int components=0;
        for(int i=1;i<=N;i++){
            int curr=i;
            if (!visited[curr]){
                components++;
                while(!visited[curr]){
                    visited[curr]=true;
                    curr=outbridge[curr];
                }
            }
        }
        cout<<components-1<<endl;
    }
    return 0;
}