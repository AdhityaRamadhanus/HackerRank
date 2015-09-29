#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   
    string s;
    cin>>s;
     
    int flag = 0;
    int tabel[26]={0};
    for(int i=0;i<s.length();i++){
        tabel[s[i]-97]++;
    }
    int odd=0;
    for(int i=0;i<26;i++){
       if (tabel[i]%2==1) odd++;
    }
    if ((odd==1 && s.length()%2==1) || odd==0) flag=1;
    else flag=0;
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}