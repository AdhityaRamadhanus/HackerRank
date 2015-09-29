#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int M,N,R;
    cin>>M>>N>>R;
    int arrays[M][N];
    int temparrays[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>arrays[i][j];
            temparrays[i][j]=-1;
        }
    }
    vector<vector<int> > ring(N/2);
    int bordercol = 0;
    int borderrow = 0;
    //Pre Process
    for(int i=0;i<N/2;i++){
        vector<int> leftover;
        for(int j=borderrow;j<M-borderrow;j++){
            if (j==borderrow){
                for(int k=bordercol;k<N-bordercol;k++){
                    ring[i].push_back(arrays[j][k]);
                }
            }
            else if (j==M-borderrow-1){
                for(int k=N-bordercol-1;k>=bordercol;k--){
                    ring[i].push_back(arrays[j][k]);
                }
            }
            else{
                leftover.push_back(arrays[j][bordercol]);
                ring[i].push_back(arrays[j][N-bordercol-1]);
            }
        }
        for(int j=leftover.size()-1;j>=0;j--){
            ring[i].push_back(leftover[j]);
        }
        int Nring = ring[i].size();
        if (Nring==0) break;
        int RotVal = R % Nring;

        //Rotate the rings
        for(int j=0;j<RotVal;j++){
            ring[i].push_back(ring[i][j]);
        }
        ring[i].erase(ring[i].begin(),ring[i].begin()+RotVal);


        //Create the matrix from the rings
        int ringidx=0;
        for(int j=bordercol;j<N-bordercol;j++){
            temparrays[borderrow][j]=ring[i][ringidx];
            ringidx++;
        }
        
        ringidx=Nring-(M-2*borderrow-1);
        for(int j=bordercol;j<N-bordercol;j++){
            temparrays[M-borderrow-1][j]=ring[i][ringidx];
            ringidx--;
        }
        ringidx=N-bordercol-bordercol;
        int tempringidx=0;
        for(int j=borderrow+1;j<M-borderrow-1;j++){
            temparrays[j][N-bordercol-1]=ring[i][ringidx+tempringidx];
            temparrays[j][bordercol]=ring[i][Nring-tempringidx-1];
            tempringidx++;
        }
        borderrow++;
        bordercol++;
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cout<<temparrays[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
