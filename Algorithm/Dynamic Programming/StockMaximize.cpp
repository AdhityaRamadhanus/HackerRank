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
        cin>>N;
        int arrays[N];
        for(int i=0;i<N;i++){
            cin>>arrays[i];}
        int max_price=-1;
        long long max_profit=0;
        for(int i=N-1;i>=0;i--){
            max_price=max(max_price,arrays[i]);
            max_profit+=(max_price-arrays[i]);
        }
        cout<<max_profit<<endl;
    }
    return 0;
}