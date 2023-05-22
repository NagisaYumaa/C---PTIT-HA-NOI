#include<bits/stdc++.h>
using namespace std;
const int Max = 10e5+6 ; 
int a[Max];
main(){
	int t; cin>>t;
	while(t--){
		int n , k ; 
		cin>>n>>k ; 
		for(int i=0 ; i <n ; i ++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<a[k-1]<<endl;
	}
}


