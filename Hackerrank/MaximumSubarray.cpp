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
        int noncontig=0,contig;
        for(int i=0;i<N;i++){
            cin>>arrays[i];
            if (arrays[i]>=0) noncontig+=arrays[i];
        }
        int max_ends_here=arrays[0];
        int max_so_far = arrays[0];
        for(int i=1;i<N;i++){
            max_ends_here = max(arrays[i],max_ends_here+arrays[i]);
            max_so_far = max(max_so_far,max_ends_here);
        }
        contig=max_so_far;
        if (max_so_far<0)
            noncontig=max_so_far;
        cout<<contig<<" "<<noncontig<<endl;
    }
    return 0;