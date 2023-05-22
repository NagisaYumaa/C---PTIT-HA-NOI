#include<bits/stdc++.h>
using namespace std;

main(){
 int T; cin>>T;
	while(T--)
	{
		char c ; 
		cin>> c ;
		if(c>=65 && c<=90)
		{
			c=c+32; 
			}
		else
		{
			c=c-32;
		}
		cout<<c<<endl;
	}
}


