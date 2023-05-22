#include<bits/stdc++.h>
using namespace std;
long long rutgon(long long a)
{
	long long b=0; 
	while(a0){
		b=b+a%10;
		a=a/10;
	}
	if(b%10!=b) {
		rutgon(b);
	}
	else 
	return b ;
}


main(){
	int t;
	cin>>t;
	while(t--){
		long long a;
		cin>>a;
		cout<<rutgon(a)<<endl;
	}
}
