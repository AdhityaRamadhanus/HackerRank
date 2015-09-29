#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tests;
    cin>>tests;
    while(tests--){
        string in;
        cin>>in;
        bool fun=true;
        int n = in.length();
        for(int i=1;i<in.length();i++){
            int a = abs((in[i]-in[i-1]));
            int b = abs((in[n-i-1]-in[n-i]));
            if (a!=b){
                fun=false;
            }
        }
        if(fun) cout<<"Funny"<<endl;
        else cout<<"Not Funny"<<endl;
    }
    return 0;
}
