#include<bits/stdc++.h>
using namespace std;
int checkstn(string s)
{
	int n = s.size();
	for(int i = 0 ; i < n/2 ; i ++)
	{
		if(s[i]==s[n-i-1])
		{
			return 1;
		}
	}
	return 0 ;
}

int checksc(string s)
{
	int n = s.size();
	for(int i= 0 ; i < n/2 ; i++){
		int x = s[i] - '0' ;
		if(x%2!=0){
			return 0; 
		}
	}
	return 1 ;
	
}

main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(checksc(s) && checkstn(s)){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}


