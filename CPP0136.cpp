#include<bits/stdc++.h>
using namespace std;
int checknt(unsigned long long n){
	if(n<2) return 0;
	//if(n==4) return 2;
	for(int i=2 ; i<=sqrt(n) ; i++ ){
		if(n%i ==0){
			return 0;
		}
	}
	return 1;
}
main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long long a;
		cin>>a;
		int dem=0;
		for(int i=2;i<=sqrt(a);i++){
			if(checknt(i)) {
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}


