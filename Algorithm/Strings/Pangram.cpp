#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {   
    string x;
    getline(cin,x);
    int Freq[26] = {0};
    for(int i=0;i<x.length();i++){
        if (x[i]>=65 && x[i]<=90){
            Freq[x[i]-65]++;
        }
        if (x[i]>=97 && x[i]<=122){
            Freq[x[i]-97]++;
        }
    }
    bool Pan=true;
    for(int i=0;i<26;i++){
        if (Freq[i]==0){
            Pan=false;
            break;
        }
    }
    if (Pan) cout<<"pangram"<<endl;
    else cout<<"not pangram"<<endl;
    return 0;
}
