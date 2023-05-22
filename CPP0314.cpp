#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	set<string > hpny;
		cin.ignore();
	for(int i =1 ; i <=n ; i++)
	{
		string s;
		getline(cin,s);
	
		hpny.insert(s);
	}
	cout<<hpny.size();
}


