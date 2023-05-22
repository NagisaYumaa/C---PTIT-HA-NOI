#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n , tar ; 
		cin>>n>>tar ; 
		int a[n];
		int ans; 
		for(int i = 1 ; i<=n ;i++){
			cin>>a[i];
			if(a[i]==tar){
				ans = i ;
			}
		}
		cout<<ans<<endl;
	}
}


