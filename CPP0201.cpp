#include<bits/stdc++.h>
using namespace std ;
int kc(int a[], int n){
	sort(a,a+n);
	int smalldif = INT_MAX;
	for(int i=1; i<n ; i++)
	{
		int	diff = a[i] - a[i-1] ;	
		smalldif=min(smalldif,diff);
	}
	for(int i=1 ; i<n ; i++){
		int diff = a[i] - a[i-1];
		if(diff == smalldif ){
			return smalldif;
		} 
	}
	return smalldif;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0 ; i<n ; i ++){
			cin>>a[i];
		}
		int khoangcachngannhat = kc(a,n);
		cout<<khoangcachngannhat<<endl;
	}
}
