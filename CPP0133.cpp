#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	for(int i = 2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
void usnt (int n){
	for(int i =2 ; i <= n ; i ++){
		if(ngto(i)) cout<<i<<" ";
	}
	cout<<endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n ;
		cin>>n;
		usnt(n);
	}
}


