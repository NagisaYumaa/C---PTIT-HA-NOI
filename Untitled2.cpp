#include<bits/stdc++.h>
using namespace std;
int x[11];
void in(int a[],int n){
	for(int i=1 ; i<=n ; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sinh(int h , int k , int n){
	for(int i=n-(k-h) ;i>= x[h-1]+1 ; i-- ){
		x[h]= i ;
	if(h==k) in(x,k);
	else{
		sinh(h+1,k,n);
		}
	}
}
main(){
	int t ;
	cin>>t;
	while(t--){
		int n,k ;
	cin>>n>>k;
	x[0]= 0 ;
	sinh(1,k,n);
	}
	
}
