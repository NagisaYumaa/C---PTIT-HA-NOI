#include<bits/stdc++.h>
using namespace std;

main(){
	int t ;
	cin>>t;
	while(t--){
		double a;
		cin>>a ;
		if(a<4.0){
			cout<<-1<<endl;
		}
		else if(a<=4.5)
		{
			cout<<7<<endl;
		}
		else if(a<=5.0)
		{
			cout<<8<<endl;
		}
		else if(a<=5.5)
		{
			cout<<9<<endl;
		}
		else{
			cout<<10<<endl;
		}
	}
}


