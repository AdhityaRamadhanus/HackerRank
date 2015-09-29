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
        int R,C;
        cin>>R>>C;
        vector<string> arrays(R);
        for(int i=0;i<R;i++){
            cin>>arrays[i];
        }
        int r,c;
        cin>>r>>c;
        vector<string> pattern(r);
        for(int i=0;i<r;i++){
            cin>>pattern[i];
        }
        bool Found=false;
        for(int i=0;i<=R-r;i++){
            for(int j=0;j<=C-c;j++){
                bool InnerFound=true;
                if (arrays[i][j]==pattern[0][0] && arrays[i][j+c-1]==pattern[0][c-1] && arrays[i+r-1][j]==pattern[r-1][0] && arrays[i+r-1][j+c-1]==pattern[r-1][c-1]){
                    
                    for(int k=0;k<r;k++){
                        for(int l=0;l<c;l++){
                            if (arrays[i+k][j+l]!=pattern[k][l]){
                                InnerFound=false;
                                break;
                            }
                        }
                    }
                    if (InnerFound){
                        cout<<"YES"<<endl; 
                    }
                }
                else InnerFound=false;
                
                if (InnerFound){
                    Found=true;
                    break;
                }
            }
            if (Found) break;
        }
        if (!Found) cout<<"NO"<<endl;
    }
    return 0;
}
