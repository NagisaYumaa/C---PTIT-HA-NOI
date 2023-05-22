#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int ans = 0;
		int n,tar;
		cin>>n>>tar;
		int a[n];
		for(int i= 0 ; i<n ; i++){
			cin>>a[i] ; 
		}
		sort(a,a+n);
		for(int i= 0 ; i < n-1 ; i ++){
			for(int j = i+1 ; j< n ; j++){
				if(a[i]+a[j]==tar){
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
}


