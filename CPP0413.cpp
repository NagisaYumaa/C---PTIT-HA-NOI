#include<bits/stdc++.h>
using namespace std; 
int cmp(int a, int b){
	return a>b ; 
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n ;
		cin>>n;
		int a[n];
		for(int i = 0 ; i< n ; i ++ ){
			cin>>a[i];
		}
		sort(a, a+n ,cmp);
		int i = 0 ;  
		int j = n-1 ; 
		while(i<=j){
			if(i==j){
				cout<<a[i]<<" ";
			}
			else
			{
				cout<<a[i]<<" "<<a[j]<<" ";
			}
			i++;
			j--;
		}
		cout<<endl;
	}
}
