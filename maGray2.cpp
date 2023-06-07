#include<bits/stdc++.h>
using namespace std;
void xuly(){
	string s;
	cin>>s;
	cout<<s[0]; // so dau giu nguyen
	for(int i=1 ; i<s.length();i++){
		int res=(s[i]-'0')^(s[i-1]-'0');// chu so sau tuyen voi so truoc
		cout<<res;
	}
	cout<<endl;
}
main(){
int t;
cin>>t;
while(t--){
	xuly();
}
}


