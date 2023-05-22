#include<bits/stdc++.h>
using namespace std;

main(){
	string s ; 
	getline (cin,s) ;
	for(int i=0 ; i<s.length() ; i++ )
	{
		if(i!=' '){
			s[i]=s[i]-2;
		}
	}
	cout<<s;
}


