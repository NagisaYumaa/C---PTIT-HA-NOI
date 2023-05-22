#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int a ,b ; 
		cin>>a>>b;
		int c[a+b];
		for(int i =  0 ; i < a+b ; i++){
			cin>>c[i] ; 
		}
		sort(c , c+a+b);
		for(int i = 0 ; i < a + b ; i++){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
}


