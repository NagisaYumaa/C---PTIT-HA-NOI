#include<bits/stdc++.h>
using namespace std;
void usntk(int n , int k){
	int dem = 0 ; 
	for(int i =2 ; i<=n ; i ++){
		while(n%i==0){
			n=n/i;
			dem++;
			if(dem==k){
				cout<<i<<endl;
			}
			}
			
	}if(dem<k) cout<<-1<<endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		usntk(n,k);
	}
}


