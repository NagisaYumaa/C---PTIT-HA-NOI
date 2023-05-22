#include<bits/stdc++.h>
using namespace std;
void unt(unsigned long long n){
	for(int i =2 ; i <=sqrt(n); i++){
		while(n%i==0)
		{
			n=n/i ;
			cout<<i<<" ";
		}
	}	
	if(n!=1) cout<<n;
	cout<<endl;
}
int main(){
	int t; 
	cin>>t;
	while(t--){
		unsigned long long n ;
		cin>>n;
		unt(n);
	}
}
