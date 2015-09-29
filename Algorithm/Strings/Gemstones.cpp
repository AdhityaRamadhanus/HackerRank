#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>
#include <set>
using namespace std;
int main(){
	int N;
	cin>>N;
	int TabelFrek[26];
	memset(TabelFrek,0,26*sizeof(int));
	for(int j=0;j<N;j++){
		string in;
		cin>>in;
		bool AddTabel[26];
		for(int i=0;i<26;i++){
			AddTabel[i]=true;}
		for(int i=0;i<in.length();i++){
			int index=in[i]-97;
			if (AddTabel[index]==true){
				TabelFrek[index]++;
				AddTabel[index]=false;}
		}
	}
	int gem=0;
	for(int i=0;i<26;i++){
		if (TabelFrek[i]==N){
			gem++;}
	}
	cout<<gem<<endl;
	return 0;}