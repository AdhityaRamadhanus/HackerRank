#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int T,N;
	cin>>T;
	while(T--){
		cin>>N;
		string arraystr;
		int array[N];
		int prevarray[N];
		bool Sorted=true;
		for(int i=0;i<N;i++){
			cin>>arraystr;
			for(int j=0;j<N;j++){
				array[j] = arraystr[j];
			}
			sort(array,array+N);
			for(int j=0;j<N;j++){
				if (i>0){
					if (array[j]<prevarray[j]){
						Sorted=false;
					}
				}
				prevarray[j]=array[j];
			}
		}
		if (Sorted) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}