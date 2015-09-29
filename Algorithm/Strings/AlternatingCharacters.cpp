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
        string x;
        cin>>x;
        int del=0;
        for(int i=0;i<x.length();){
            if (x[i]==x[i+1]){
                while(x[i]==x[i+1]){
                    i++;
                    del++;
                }
            }
            else{
                i++;
            }
        }
        cout<<del<<endl;
    }
    
    return 0;
}
