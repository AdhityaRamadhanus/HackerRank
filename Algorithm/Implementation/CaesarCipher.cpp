#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,K;
    string input;
    cin>>N>>input>>K;
    for(int i=0;i<input.length();i++){
        if (input[i]>=65 && input[i]<=90){
            input[i]=((input[i]-65 + K) % 26)+65;
        }
        else if (input[i]>=97 && input[i]<=122){
            input[i]=((input[i]-97 + K) % 26)+97;
        }
    }
    cout<<input<<endl;
    return 0;
}