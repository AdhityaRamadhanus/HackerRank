#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,A,B;
    cin>>T;
    while(T--){
        cin>>A>>B;
        int root = (int) ceil(sqrt((double)A));
        //cout<<root<<endl;
        int soln=0;
        while(root*root <= B){
            root++;
            soln++;
        }
        cout<<soln<<endl;
    }
    return 0;
}
