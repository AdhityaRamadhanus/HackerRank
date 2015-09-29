#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>
#include <set>
#include <cmath>
using namespace std;
int main(){
	string A,B;
	cin>>A;
	cin>>B;
	int AFrek[26],BFrek[26];
	memset(AFrek,0,26*sizeof(int));
	memset(BFrek,0,26*sizeof(int));
	for(int i=0;i<A.length();i++){
		int index=A[i]-97;
		AFrek[index]++;}
	for(int i=0;i<B.length();i++){
		int index=B[i]-97;
		BFrek[index]++;}
	int cost=0;
	for(int i=0;i<26;i++){
		int diff=abs(AFrek[i]-BFrek[i]);
		cost+=diff;}
	cout<<cost<<endl;
	return 0;}