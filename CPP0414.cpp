#include<bits/stdc++.h>
using namespace std;
main(){
	int t ;
	cin>>t;
	while(t--){
		int n ;
		cin>>n;
		set<int > s; 
		for(int i= 0 ; i < n ; i++){
			long long x ;
			cin>>x;
			while(x>0){
				s.insert(x%10);
				x=x/10;
			}
		}
		for(int x:s){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
