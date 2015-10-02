#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin>>N;
    vector<int> arrays(N);
    vector<int> candies(N);
    for(int i=0;i<N;i++){
        cin>>arrays[i];
        candies[i]=1;
    }
    int min_candies=0;
    for(int i=0;i<N-1;){
        if (arrays[i]>arrays[i+1]){
            int length=0;
            int tempi=i;
            while(arrays[i]>arrays[i+1]){
                length++;
                i++;
                if (i==N-1) break;
            }
            int mincurr=candies[tempi+length];
            for(int j=tempi+length-1;j>tempi;j--){
                mincurr++;
                candies[j]=mincurr;
            }
            if (mincurr>=candies[tempi]){
                int diff = mincurr-candies[tempi]+1;
                candies[tempi]+=(diff);
            }
        }
        else if (arrays[i]<arrays[i+1]){
            int mincurr=candies[i];
            while(arrays[i]<arrays[i+1]){
                mincurr++;
                candies[i+1]=mincurr;
                i++;
                if (i==N-1) break;
            }
            
        }
        else{
            i++;
        }
    }
    for(int i=0;i<N;i++){
        min_candies+=candies[i];
    }
    cout<<min_candies<<endl;
    return 0;
}
