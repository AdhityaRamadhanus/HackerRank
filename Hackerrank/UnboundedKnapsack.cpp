#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <cstring>
using namespace std;


int main() {
    int T,n,k;
    cin>>T;
    while(T--){
        cin>>n>>k;
        int arrays[n];
        int DP[k+1];
        memset(DP,0,sizeof(DP));
        for(int i=0;i<n;i++){
            cin>>arrays[i];
        }
        for(int i=1;i<=k;i++){
            for(int j=0;j<n;j++){
                if (i-arrays[j]>0){
                    DP[i]=max(DP[i],DP[i-arrays[j]]+arrays[j]);
                }
                else if (i-arrays[j]==0) DP[i]=i;
            }
        }
        cout<<DP[k]<<endl;
    }
    return 0;
}
