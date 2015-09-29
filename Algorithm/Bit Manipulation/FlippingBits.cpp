#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        unsigned int x;
        cin>>x;
        unsigned int y = x ^ 4294967295;
        cout<<y<<endl;
    }
    return 0;
}
