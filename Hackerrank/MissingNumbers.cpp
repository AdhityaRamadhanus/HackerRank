#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int n,m;
    cin>>n;
    int array[10001]={0};
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        array[x]++;
    }
    cin>>m;
    set<int> missing;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        array[x]--;
        if (array[x]<0){
            missing.insert(x);
            array[x]++;
        }
    }
    for (std::set<int>::iterator it=missing.begin(); it!=missing.end(); ++it)
        std::cout<<*it<<" ";
    return 0;
}