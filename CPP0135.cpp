#include<bits/stdc++.h>
using namespace std;
int uc(int n){
	if(n<2) return 0 ;
	for(int i=2 ; i<=sqrt(n); i ++){
		if(n%i == 0) return 0 ;		
	}
	return (long long) n*n ;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n ;
		cin>>n ; 
		for(int i=2 ; i<=sqrt(n) ; i++){
			if(uc(i)) cout<<uc(i)<<" ";
		}
		cout<<endl;
	}
}


