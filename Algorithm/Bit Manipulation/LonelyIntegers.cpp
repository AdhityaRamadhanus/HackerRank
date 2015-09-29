#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>
#include <set>
using namespace std;
int main(){
	//freopen("InputLonely.txt","r",stdin);
	int N;
	cin>>N;
	int TabelFrek[101];
	memset(TabelFrek,0,101*sizeof(int));
	for(int i=0;i<N;i++){
		int a;
		cin>>a;
		TabelFrek[a]++;}
	int Tersangka=0;
	for(int i=0;i<101;i++){
		if (TabelFrek[i]==1){
			Tersangka=i;}
	}
	cout<<Tersangka<<endl;
	return 0;}