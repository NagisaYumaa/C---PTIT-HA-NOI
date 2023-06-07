#include<bits/stdc++.h>
using namespace std;
int xuly(int a[],int n){
	 
	int d[n+5];
	d[0]=a[0];
	d[1]=(a[0]>a[1])?a[0]:a[1];
	for(int i=2;i<n;i++){
		int m = d[i-1];
		if(m<d[i-2]+a[i]){
			m =d[i-2]+a[i];
		}
		d[i]=m;
	}
	return d[n-1];
}
main(){
int t;
cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[1000005];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<xuly(a,n)<<endl;
	}
}
