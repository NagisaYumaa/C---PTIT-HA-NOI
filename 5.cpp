#include<bits/stdc++.h>
using namespace std;

main(){
int t;
cin>>t; while(t--)
{
	int n ;
	cin>>n;
	int a;
	bool check=false ; 
	while(n>0){
		a=n%10;
		if(a==0||a==6||a==8){
				n=n/10;
				check=true;
		}
		else{
			cout<<"NO"<<endl;
			break;
		}	
	}
	if(check==true)
	{
		cout<<"YES"<<endl;
	}
}
}


