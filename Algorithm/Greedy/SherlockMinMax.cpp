#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,P,Q;
    cin>>N;
    int array[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    cin>>P>>Q;
    sort(array,array+N);
    int maxM = 0;
    int maxMin = 0;
    if (P<array[0]){
        maxMin = array[0]-P;
        maxM = P;
    }
    if (Q>array[N-1] && (Q-array[N-1] > maxMin)){
        maxMin = Q-array[N-1];
        maxM = Q;
    }
    for(int i=0;i<N-1;i++){
        int interval = array[i+1]-array[i];
        if (interval % 2 == 0 && interval!=0 && interval/2>maxMin){
            if (P<= array[i]+interval/2 && Q>=array[i]+interval/2){
                maxMin = interval/2;
               	maxM = array[i]+interval/2;
            }
           	else if (Q<array[i]+interval/2){
           		if (min(array[i+1]-Q,Q-array[i])>maxMin){
       				maxMin=min(array[i+1]-Q,Q-array[i]);
       				maxM=Q;
       			}
           	}
       	}
       	else if (interval % 2 == 1 && interval!=1 && interval/2>maxMin){
           	if (P<= array[i]+interval/2 && Q>=array[i]+interval/2){
               	maxMin = interval/2;
               	maxM = array[i]+interval/2;
           	}
           	else if (Q<array[i]+interval/2){
           		if (min(array[i+1]-Q,Q-array[i])>maxMin){
       				maxMin=min(array[i+1]-Q,Q-array[i]);
       				maxM=Q;
       			}
           	}
       	}
    }
    cout<<maxM<<endl;
    return 0;
}