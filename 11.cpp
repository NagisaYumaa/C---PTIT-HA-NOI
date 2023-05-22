#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--)
	{
		double a1,a2,b1,b2;
		double kc ;
		cin>>a1>>a2>>b1>>b2 ; 
		 
		 kc = sqrt((b1-a1)*(b1-a1)+(b2-a2)*(b2-a2));
		 
		 cout<<fixed<<setprecision(4)<<kc<<endl;
	}
}


