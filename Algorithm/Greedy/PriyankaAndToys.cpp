#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin>>N;
    int array[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    sort(array,array+N);
    int min=1;
    int currweight=array[0];
    for(int i=1;i<N;i++){
        if (array[i]>currweight+4){
            currweight=array[i];
            min++;
        }
    }
    cout<<min<<endl;
    return 0;
}