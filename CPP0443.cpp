#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n ;
		int ans ;
		cin>>n;
		int a[n-1];
		for(int i =1 ; i<=n-1 ; i++){
			cin>>a[i];
		}
		for(int i =1 ; i <=n-1; i++){
			if(a[i]!=i){
				ans=i;
				cout<<i<<endl;
				break;
			}
		}
	}
}


