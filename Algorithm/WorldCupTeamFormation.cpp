#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arrays[10];
    for(int i=0;i<10;i++){
        cin>>arrays[i];
    }
    sort(arrays,arrays+10);
    cout<<arrays[9]+arrays[7]+arrays[5]<<endl;
    return 0;
}
