#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	int Width[n];
	for(int i=0;i<n;i++){
		cin>>Width[i];}
	for(int i=0;i<t;i++){
		int ix,jx;
		cin>>ix>>jx;
		int min=4;
		for(int j=ix;j<=jx;j++){
			if (Width[j]==1){
				min=1;
				break;}
			else if (min>Width[j])
				min=Width[j];
		}
		cout<<min<<endl;
	}
	return 0;}
				