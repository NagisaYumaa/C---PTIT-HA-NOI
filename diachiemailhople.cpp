#include<bits/stdc++.h>
using namespace std;
bool check(string mail){
	for(int i = 0 ; i<mail.size() ; i++){
		if(!isalnum(mail[i]) && mail[i] != '.' && mail[i]!='_'){
			return false;
		}
	}
	return true;
}
main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string mail;
		getline(cin,mail);
		if(check(mail)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}


