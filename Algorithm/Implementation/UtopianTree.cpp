#include <iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	for (int i=0;i<t;i++){
		cin>>n;
		int height=1;
		for (int j=1;j<=n;j++){
			if (j%2==0)
				height++;
			else
				height*=2;
		}
		cout<<height<<endl;
	}
	return 0;}