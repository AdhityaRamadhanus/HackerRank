#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int Connected[101];
int AdjList[101][101];
int DFS(int Root,int N){
    Connected[Root]=1;
    for(int i=1;i<N+1;i++){
        if (AdjList[Root][i]==1){
            Connected[Root]+=DFS(i,N);
        }
    }
    return Connected[Root];
}
int main() {
    int N,M;
    cin>>N>>M;
    int HasParent[N+1];
    for(int i=0;i<N+1;i++){
        HasParent[i]=-1;
        for(int j=0;j<N;j++){
            AdjList[i][j]=-1;
        }
    }
    
    for(int i=0;i<M;i++){
        int src,dst;
        cin>>src>>dst;
        HasParent[src]=dst;
        AdjList[dst][src]=1;
    }
    //FIND ROOT
    int Root;
    for(int i=1;i<N+1;i++){
        if (HasParent[i]==-1){
            Root=i;
            break;
        }
    }
    DFS(Root,N);
    int count=0;
    for(int i=1;i<=N;i++){
        if (i!=Root)
            if (Connected[i]%2==0) count++;
    }
    cout<<count<<endl;
    return 0;
}