#include<bits/stdc++.h>
using namespace std;

main(){
	int t ; 
	cin>> t; 
	while(t--){
		int x , k ; 
		cin>>x>>k;
		int n = x*x ;
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<a[k-1]<<endl;
	}
}


