#include<bits/stdc++.h>
using namespace std;
int a[100],n;
void inkq(){
	for(int i=0; i<n ; i++){
		cout<<a[i];
	}
	cout<<endl;
}
void nhiphan(int i){
	for(int j=0;j<1;j++){
		a[i]= j ;
		if(i==n) inkq();else nhiphan(i+1);
	}
	
}
main(){
	cin>>n;
	nhiphan(n);
}


