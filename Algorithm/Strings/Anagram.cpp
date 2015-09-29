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
        string input;
        cin>>input;
        int Nlength = input.length();
        if (Nlength % 2 == 1) cout<<"-1"<<endl;
        else{
            int AFreq[26]={0};
            int BFreq[26]={0};
            for(int i=0;i<Nlength/2;i++){
                AFreq[input[i]-97]++;
            }
            for(int i=Nlength/2;i<Nlength;i++){
                BFreq[input[i]-97]++;
            }
            int min_change=0;
            for(int i=0;i<26;i++){
                if (AFreq[i]<BFreq[i]) min_change+=BFreq[i]-AFreq[i];
            }
            cout<<min_change<<endl;
        }
    }
    return 0;
}
