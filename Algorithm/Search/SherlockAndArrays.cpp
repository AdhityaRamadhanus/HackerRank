#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int array[n];
        int total=0;
        int left=0,right=0;
        for(int i=0;i<n;i++){
            cin>>array[i];
            total+=array[i];
        }
        if (n==1) cout<<"YES"<<endl;
        else{
            bool Found=false;
            for(int i=1;i<n-1;i++){
                left+=array[i-1];
                right=total-left-array[i];
                if (left==right){
                    Found=true;
                    break;
                }
            }
            if (Found) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}