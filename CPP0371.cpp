#include<bits/stdc++.h>
using namespace std;

main(){
	string s ;
	cin>>s ; 
	for(int i = 0  ; i < s.size() ; i++ )
	{
		if(s[i]!='A'&&s[i]!='a'&&s[i]!='E'&&s[i]!='e'&&s[i]!='I'&&s[i]!='i'&&
		s[i]!='Y'&&s[i]!='y'&&s[i]!='U'&&s[i]!='u'&&s[i]!='O'&&s[i]!='o'
		){	
		char tl = tolower(s[i]);
		cout<<"."<<tl;
		}
	
	}
}


