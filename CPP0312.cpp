#include<bits/stdc++.h>
using namespace std;

main(){
	int t ; 
	cin>>t;
	while(t--){
		string s ;
		cin>>s ; 
		//cout<<s<<endl;
		int k; cin>>k ;
		set<char>charSet ; 
		for(char c:s){
			if(c>='a' && c<='z')
			{
				charSet.insert(c); 
			}
		}
		
		int missingchar = 26 - charSet.size();
		if(k>=missingchar)
		{
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
		
		
		
	}
}


