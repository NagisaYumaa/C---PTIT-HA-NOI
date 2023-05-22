#include<bits/stdc++.h>
using namespace std;
int checknt(int n){
	if(n<4) return n;
	//if(n==4) return 2;
	for(int i=2 ; i<=sqrt(n) ; i++ ){
		if(n%i ==0){
			return i;
			break ;
		}
	}
	return n;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		for(int i =1 ; i<=a ; i ++){
			cout<<checknt(i)<<" ";
		}
		cout<<endl;
	}
}


