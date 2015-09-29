#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int N,K;
    cin>>N>>K;
    int min_unfair=INT_MAX;
    int arrays[N];
    for(int i=0;i<N;i++){
        cin>>arrays[i];
    }
    int MinP = 0;
    int MaxP = K-1;
    sort(arrays,arrays+N);
    do{
        min_unfair=min(min_unfair,arrays[MaxP]-arrays[MinP]);
        MinP++;
        MaxP++;
    }while(MaxP<N);
    cout<<min_unfair<<endl;
}