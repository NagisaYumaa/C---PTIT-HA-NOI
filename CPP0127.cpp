#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	if(n<2) return 0;
	for(int i=2 ;i <=sqrt(n) ; i++ )
	{
		if(n%i==0) return 0;
	}
	return 1 ; 
}
main(){
	int t; 
	cin>>t;
	while(t--){
		int n ;
		cin>>n ; 
		int check = 0;
		if(n>2){
			
		
		for(int i =1 ; i <= n/2 ;i ++ )
		{
			if(ngto(i)&&ngto(n-i))
			{
				cout<<i<<" "<<n-i<<endl;
				check =1 ;
				break ; 
			}
			else{
				check =0;
			}
		}
		if(check == 0){
			cout<<-1<<endl;
		}
	}else cout<<-1<<endl;
	}
	
}


