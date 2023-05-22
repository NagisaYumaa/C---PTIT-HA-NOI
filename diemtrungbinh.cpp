#include<bits/stdc++.h>
using namespace std;

main(){
	int n ;
	cin>>n;
	double a[n];
	for(int i =0 ; i < n ; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	double s = 0 ;
	for(int i =1 ; i<n-1; i++){
		s=s+a[i];
	}
	cout<<s/(n-2);
}


