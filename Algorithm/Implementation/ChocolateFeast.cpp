#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t){
		int N,C,M;
		cin>>N>>C>>M;
		int choco=N/C;
		int Wrappers=choco;
		while(Wrappers>=M){
			choco+=Wrappers/M;
			int temp=Wrappers/M;
			Wrappers%=M;
			Wrappers+=temp;
		}
		cout<<choco<<endl;
		t--;}
	return 0;}