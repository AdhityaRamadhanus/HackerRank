#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,t,x;
    int pos=0;
    cin>>t;
    while(t--){
        cin>>n>>k;
        pos=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if (x<=0) pos++;
        }
        if (pos<k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
