#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		string s ; 
	cin>>s;
	int c  = 1 ;
	for(int i = 0 ; i <s .size() ; i ++)
	{
		if(s[i]==s[i+1])
		{
			c++;
		}
		else {
			cout<<s[i]<<c;
			c=1;
		}
	 }
	 cout<<endl;
	}
	 
}


