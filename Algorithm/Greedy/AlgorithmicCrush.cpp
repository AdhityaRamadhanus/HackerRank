#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	long long k,max_tot=0,max_cur=0;
    int N,K,a,b;
    cin>>N>>K;
    long long *pref_sum=new long long[N+1]();
    for(int i=0;i<K;i++){
        cin>>a>>b>>k;
        pref_sum[a]+=k;
        pref_sum[b+1]-=k;
    }
    for(int i=1;i<=N;i++){
        max_cur+=pref_sum[i];
        max_tot=max(max_tot,max_cur);
    }
    cout<<max_tot<<endl;
    return 0;
}