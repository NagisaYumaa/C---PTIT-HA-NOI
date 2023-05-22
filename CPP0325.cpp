#include<bits/stdc++.h>
using namespace std;

int check11(string s){
	unsigned long long check;
	unsigned long long tonghc = 0 ;
	unsigned long long tonghl = 0 ;
	for(int i= 0 ; i<s.size() ; i++)
	{
		int so = s[i]-'0';
		if(i%2==0){
			tonghc+=so;
		}
		else{
			tonghl+=so;
		}
	}
	
	if(tonghc>tonghl){
		check = tonghc - tonghl;
	}
	else{
		check = tonghl - tonghc ; 
	}
	
	if(check%11==0){
		return 1;
	} 
	return 0;	
}

main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(check11(s))
		{
			cout<<1<<endl;
		}
		else cout<<0<<endl;
	}
}


