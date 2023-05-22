#include<bits/stdc++.h>
using namespace std;
int a[1003];
main(){
int t ;
cin>>t;
while(t--)
	{
		int n , Q ; 
		cin>>n>>Q ; 
		//nhap a[i]
		for(int i=1 ; i <=n ; i ++)
		{
			cin>>a[i]; 
		}
		//
		for(int i=1 ; i <=Q ; i++){
			int L,R;
			cin>>L>>R;
			int s = 0 ; 
			for(int i =L ; i<=R ; i ++){
				s=s+a[i];
			}
			cout<<s<<endl; 
		}
	
	}
}


