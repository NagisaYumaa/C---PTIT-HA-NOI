#include<bits/stdc++.h>
using namespace std;

main(){
	int t; 
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		int res = s.find("084");
		cout<<s.erase(res,3)<<endl;
	}
}


