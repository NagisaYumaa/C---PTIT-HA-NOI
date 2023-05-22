#include<bits/stdc++.h>
using namespace std;

main(){
		int n; cin>>n;
		double s=0;
		for(int i=1 ; i <=n ; i++)
		{
			s=s+1.0000/i;
		}
//		#setprecision(number)<<fixed<<answer lam tron dap an den so number   
		cout<<setprecision(4)<<fixed<<s<<endl;
}


