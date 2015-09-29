#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>
#include <set>
using namespace std;
int Tab[100001];
int BinarySearch(int l,int r,int ref, int val){
	if (l>r){return -1;}
	else{
		int mid=(l+r)/2;
		if (abs(Tab[mid]-ref)>val){
			return BinarySearch(l,mid-1,ref,val);}
		else if (abs(Tab[mid]-ref)<val){
			return BinarySearch(mid+1,r,ref,val);}
		else{
			return mid;}
	}
}	
			
int main(){
	int N,K;
	cin>>N>>K;
	for(int i=0;i<N;i++){
		cin>>Tab[i];}
	sort(Tab,Tab+N);
	int pairs=0;
	for(int i=0;i<N-1;i++){
		int ret=BinarySearch(i+1,N,Tab[i],K);
		if (ret!=-1){
			pairs++;}
	}
	cout<<pairs<<endl;
	return 0;}