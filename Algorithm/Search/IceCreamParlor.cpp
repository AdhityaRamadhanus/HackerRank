#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>
#include <set>
using namespace std;
int main(){
	int T,M,N;
	cin>>T;
	while(T--){
		cin>>M>>N;
		int Tab[N];
		for(int i=0;i<N;i++){
			cin>>Tab[i];}
		for(int i=0;i<N-1;i++){
			int found=0;
			for(int j=i+1;j<N;j++){
				if (Tab[i]+Tab[j]==M){
					cout<<i+1<<" "<<j+1<<endl;
					found=1;
					break;}
			}
			if (found) break;
		}
	}
	return 0;}