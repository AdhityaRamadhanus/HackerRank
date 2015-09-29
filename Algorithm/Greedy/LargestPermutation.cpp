#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,K;
    int swaps=0;
    int IndexTab[100001];
    int array[100001];
    cin>>N>>K;
    for(int i=0;i<N;i++){
        cin>>array[i];
        IndexTab[array[i]]=i;
    }
    for(int i=0;i<N;i++){
        if (array[i]!=N-i && K>0){
            K--;
            int temp = array[i];
            swap(array[i],array[IndexTab[N-i]]);
            swap(IndexTab[N-i],IndexTab[temp]);
        }
        cout<<array[i]<<" ";
    }
    return 0;
}