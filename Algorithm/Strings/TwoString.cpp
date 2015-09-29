#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--){
        string A,B;
        cin>>A>>B;
        bool Freq[26]={false};
        bool Found=false;
        for(int i=0;i<A.length();i++){
            Freq[A[i]-97]=true;
        }
        for(int i=0;i<B.length();i++){
            if (Freq[B[i]-97]){
                Found=true;
                break;
            }
        }
        if (Found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}