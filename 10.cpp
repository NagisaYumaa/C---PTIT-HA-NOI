#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
//	cin.ignore();
	while(t--){
//		unsigned long long a;
//		cin>>a;
//		string s=to_string(a);
//		getline(cin,s);
		string s;
		cin>>s;
		bool check =true;
	for(int i=0 ; i<s.length()-1;i++)
	{	
		if(abs(s[i]-s[i+1])==1){
			continue;
		}
		else {
			check=false;
			break;
		}
	}
	if(check==true) {
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
}
}

