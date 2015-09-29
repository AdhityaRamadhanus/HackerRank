#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct order{
    int fin;
    int index;
};
bool pairCompare(const order& A, const order& B) {
    if (A.fin==B.fin){
		return A.index<B.index;
	}
	else{
    	return A.fin < B.fin;
    }
}

int main() {
    int n;
    cin>>n;
    order array[n];
    for(int i=0;i<n;i++){
        int t,d;
        cin>>t>>d;
        array[i].fin=t+d;
        array[i].index=i;
        //cout<<array[i].fin<<" "<<array[i].index<<endl;
    }
    sort(array,array+n,pairCompare);
    for(int i=0;i<n;i++){
    	cout<<(array[i].index+1)<<" ";
    }
    cout<<endl;
    return 0;
}