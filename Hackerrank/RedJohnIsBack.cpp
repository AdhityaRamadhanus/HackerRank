#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int Sieve(int upperBound) {
      int upperBoundSquareRoot = (int)sqrt((double)upperBound);
      bool *isComposite = new bool[upperBound + 1];
      memset(isComposite, 0, sizeof(bool) * (upperBound + 1));
      for (int m = 2; m <= upperBoundSquareRoot; m++) {
            if (!isComposite[m]) {
                  for (int k = m * m; k <= upperBound; k += m)
                        isComposite[k] = true;
            }
      }
      int ans=0;
      for(int i=2;i<upperBound+1;i++){
          if (!isComposite[i])  ans++;
      }
    return ans;
}
int main() {
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int DP[N+1];
        DP[0]=1;
        for(int i=1;i<N+1;i++){
            int DP4,DP1;
            if (i-4 < 0) DP4=0;
            else DP4 = DP[i-4];
            
            if (i-1 < 0) DP1=0;
            else DP1 = DP[i-1];
            
            DP[i]=DP4+DP1;
        }
        if (DP[N]<2) cout<<0<<endl;
        else cout<<Sieve(DP[N])<<endl;
    }
    return 0;
}
