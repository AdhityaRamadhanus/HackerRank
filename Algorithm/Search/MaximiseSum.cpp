#include <bits/stdc++.h>

using namespace std;

int N;
long long M;
long long A[100000];

int main()
{
    int T;
    scanf("%d", &T);
    set<long long> S;
    while(T--)
    {
        scanf("%d%lld", &N, &M);
        for(int i=0; i<N; i++)
            scanf("%lld", A+i);
        S.clear();
        S.insert(0);
        long long sum=0, ans=0;
        for(int i=0; i<N; i++)
        {
            sum+=A[i];
            sum%=M;
            auto it=S.upper_bound(sum);
            if(it==S.end()){
                ans=max(ans, sum-*S.begin());
            }else{
                ans=max(ans, sum-*it+M);
            }
            S.insert(sum);
        }
        printf("%lld\n", ans);
    }
    return 0;
}