#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N,M;
    cin>>N>>M;
    int coins[M];
    for(int i=0;i<M;i++){
        cin>>coins[i];
    }
    long long DP[N+1][M];
    for(int i=0;i<M;i++){
        DP[0][i]=1;
    }
    for(int i=1;i<=N;i++){
        for(int j=0;j<M;j++){
            long long x=0,y=0;
            //Solution with coins[j]
            
            if (i-coins[j] >= 0) x = DP[i-coins[j]][j];
            if (j>0) y = DP[i][j-1];
            DP[i][j]=(long long) x+y;
        }
    }
    cout<<DP[N][M-1];
    return 0;
}
