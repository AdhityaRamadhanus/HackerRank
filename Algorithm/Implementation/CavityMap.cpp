#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,cavities=0;
    cin>>n;
    string mat[n];
    for(int i=0;i<n;i++){
       cin>>mat[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int counts=0;
            //Up
            if (i-1>=0 && mat[i-1][j]<mat[i][j]) counts++;
            if (i+1<=n-1 && mat[i+1][j]<mat[i][j]) counts++;
            if (j+1<=n-1 && mat[i][j+1]<mat[i][j]) counts++;
            if (j-1>=0 && mat[i][j-1]<mat[i][j]) counts++;
            
            if (counts==4){
                cavities++;
                cout<<"X";}
            else{
                cout<<mat[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}
