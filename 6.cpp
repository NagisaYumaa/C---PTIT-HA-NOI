#include<bits/stdc++.h>
using namespace std;

main(){
int t; 
cin>>t;
while(t--){
	unsigned long long n ;
	unsigned long long rv = 0 ; 
	cin>>n;
	unsigned long long check = n ; 
	while(n>0)
	{
		rv = rv*10+ n%10; 
		n=n/10;
	}
	if(rv==check)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
}


