#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>
#include <set>
using namespace std;
int main(){
	//freopen("InputFlower.txt","r",stdin);
	int N,K;
	cin>>N>>K;
	int Tab[N];
	for(int i=0;i<N;i++){
		cin>>Tab[i];}
	sort(Tab,Tab+N);
	reverse(Tab,Tab+N);
	int Bought[K];
	memset(Bought,0,sizeof(int)*K);
	int Kcounter=0;
	int cost=0;
	for(int i=0;i<N;i++){
		Bought[Kcounter]++;
		cost+=Bought[Kcounter]*Tab[i];
		Kcounter++;
		Kcounter%=K;
	}
	cout<<cost<<endl;
	return 0;}