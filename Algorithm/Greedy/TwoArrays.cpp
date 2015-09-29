#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>
#include <set>
using namespace std;
int main(){
	int T,N,K;
	cin>>T;
	while(T--){
		cin>>N>>K;
		int Array1[N],Array2[N];
		for(int i=0;i<N;i++){
			cin>>Array1[i];}
		for(int i=0;i<N;i++){
			cin>>Array2[i];}
		sort(Array1,Array1+N);
		sort(Array2,Array2+N);
		bool Arrange=true;
		for(int i=0;i<N;i++){
			if (Array1[i]+Array2[N-i-1]<K){
				Arrange=false;
				break;}
		}
		if (Arrange) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;}