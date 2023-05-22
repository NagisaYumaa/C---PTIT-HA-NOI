#include<bits/stdc++.h>
using namespace std;
bool check(string mail){
	regex pattern("^[A-Za-z0-9._]+@[A-Za-z0-9.]+\\.[A-Za-z]{2,}");
	return regex_match(mail,pattern);
}
main(){
	int t;
	cin>>t;
	while(t--){
	string mail;
	cin>>mail;
	if(check(mail))
	{
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	}
	
}


