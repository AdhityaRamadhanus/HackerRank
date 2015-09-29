#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>
#include <set>
using namespace std;
char grid[101][101] ;
vector<string> Path;
vector<pair<int, int> > visited;
bool IsVisited(int row,int col){
	for(int i=0;i<visited.size();i++){
		if (visited[i].first==row && visited[i].second==col){
			return true;}
	}
	return false;}
bool DFS(int row,int col,int N,int M){
	if (grid[row][col]=='*'){
		return true;}
	else if (IsVisited(row,col)){
		return false;}
	else if (grid[row][col]=='X'){
		return false;}
	else{
		visited.push_back(make_pair(row,col));
		//Up
		if ((row-1)>=0){
			if (DFS(row-1,col,N,M)){
				Path.push_back("up");
				return true;}
		}
		//Down
		if ((row+1)<N){ 
			if (DFS(row+1,col,N,M)){
				Path.push_back("down");
				return true;}
		}
		//Left
		if ((col-1)>=0){
			if (DFS(row,col-1,N,M)){
				Path.push_back("left");
				return true;}
		}
		//Right
		if ((col+1)<M){
			if (DFS(row,col+1,N,M)){
				Path.push_back("right");
				return true;}
		}
		return false;
	}
}	
bool IsImpressed(int K,int row,int col,int N,int M){
	int TempK=0;
	for(int i=Path.size()-1;i>=0;i--){
		grid[row][col]='V';
		int avail=0;
		if ((row-1)>=0 &&( grid[row-1][col]=='.' || grid[row-1][col]=='*')){
			avail++;
		}
		//Down
		if ((row+1)<N &&( grid[row+1][col]=='.' || grid[row+1][col]=='*')){ 
			avail++;
		}
		//Left
		if ((col-1)>=0 &&( grid[row][col-1]=='.' || grid[row][col-1]=='*')){ 
			avail++;
		}
		//Right
		if ((col+1)<M &&( grid[row][col+1]=='.' || grid[row][col+1]=='*')){ 
			avail++;
		}
		if (avail>1) TempK++;
		if (Path[i]=="up") row--;
		else if (Path[i]=="down") row++;
		else if (Path[i]=="left") col--;
		else if (Path[i]=="right") col++;
	}
	if (TempK==K) return true;
	else return false;
}
		
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,M,K;
		cin>>N>>M;
		int x,y;
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				cin>>grid[i][j];
				if (grid[i][j]=='M'){
					x=i;
					y=j;}
			}
		}
		DFS(x,y,N,M);
		cin>>K;
		if (IsImpressed(K,x,y,N,M)) cout<<"Impressed"<<endl;
		else cout<<"Oops!"<<endl;
		Path.clear();
		visited.clear();
	}
	return 0;}