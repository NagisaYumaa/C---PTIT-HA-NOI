#include<bits/stdc++.h>
using namespace std;

main(){
	int t ; 
	cin>>t;
	while(t--)
	{
		int n,tar ; 
		cin>>n>>tar;
		int ans = 0 ;
	//	int ans ;
		int a[n] ; 
		for(int i = 0 ; i <n ; i++)
		{
			cin>>a[i] ;
		}
		
		for(int i = 0 ; i<n ; i++)
		{
			if(a[i]==tar) 
			{
				cout<<i+1<<endl;
		
				ans = 1;
				break;
			}
		}
		if(ans==0) cout<<-1<<endl;
	}
}


