#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    cin>>T;
    while(T--){
        string input;
        cin>>input;
        int sol=0;
        int ins = atoi(input.c_str());
        for(int i=0;i<input.length();i++){
            if (input[i]>48){
                if (ins % (input[i]-48) == 0){
                    sol++;  
                }
            }
        }
        cout<<sol<<endl;
    }
    return 0;
}
