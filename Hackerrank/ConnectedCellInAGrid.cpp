#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> arr;
int connected;
void FloodFill(int startrow,int startcol,int m,int n){
	connected++;
	arr[n*startrow+startcol]=2;
	if (startrow-1>=0 && arr[n*(startrow-1)+startcol]==1){
		FloodFill(startrow-1,startcol,m,n);
	}
	if (startrow+1<m && arr[n*(startrow+1)+startcol]==1){
		FloodFill(startrow+1,startcol,m,n);
	}
	if (startcol-1>=0 && arr[n*startrow+startcol-1]==1){
		FloodFill(startrow,startcol-1,m,n);
	}
	if (startcol+1<n && arr[n*startrow+startcol+1]==1){
		FloodFill(startrow,startcol+1,m,n);
	}
	//DIAGONAL
	if (startrow-1>=0 && startcol-1>=0 && arr[n*(startrow-1)+startcol-1]==1){
		FloodFill(startrow-1,startcol-1,m,n);
	}
	if (startrow+1<m && startcol-1>=0 && arr[n*(startrow+1)+startcol-1]==1){
		FloodFill(startrow+1,startcol-1,m,n);
	}
	if (startrow-1>=0 && startcol+1<n && arr[n*(startrow-1)+startcol+1]==1){
		FloodFill(startrow-1,startcol+1,m,n);
	}
	if (startrow+1<m && startcol+1<n && arr[n*(startrow+1)+startcol+1]==1){
		FloodFill(startrow+1,startcol+1,m,n);
	}
}
int main(){
	int m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int x;
			cin>>x;
			arr.push_back(x);
		}
	}
	int maxconnected = 0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if (arr[i*n+j]==1){
				connected=0;
				FloodFill(i,j,m,n);
				maxconnected = max (maxconnected,connected);
			}
		}
	}
	cout<<maxconnected<<endl;
	return 0;
}