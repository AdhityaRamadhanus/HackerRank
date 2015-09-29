#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string input;
    cin>>input;
    int N = input.length();
    int col = (int) ceil(sqrt((double)N));
    int row = (int) floor(sqrt((double)N));
    for(int i=0;i<col;i++){
        int row=i;
        while(row<N){
            cout<<input[row];
            row+=col;
        }
        cout<<" ";
    }
    cout<<endl;
    return 0;
}
