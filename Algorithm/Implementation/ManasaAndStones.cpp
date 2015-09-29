#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int T,n,a,b;
    cin>>T;
    while(T--){
        cin>>n>>a>>b;
        set<int> Soln;
        for(int i=0;i<n-1;i++){
            if (i==0){
                Soln.insert(a);
                Soln.insert(b);
            }
            else{
                set<int>::iterator it;
                set<int> Temp;
                for(it=Soln.begin();it!=Soln.end();it++){
                    Temp.insert(*it+a);
                    Temp.insert(*it+b);
                }
                Soln = Temp;
            }
        }
        set<int>::iterator it;
        for(it=Soln.begin();it!=Soln.end();it++){
            cout<<*it<<" ";    
        }
        cout<<endl;
    }
    return 0;
}
