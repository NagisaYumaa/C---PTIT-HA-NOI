#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		bool check = false;
		for(int i = 0 ; i < n ; i++ ){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i = 0 ; i < n-1 ; i++ ){
			if(a[i]<a[i+1]){
				cout<<a[i]<<" "<<a[i+1]<<endl;
				check= true;
				break;
			}
		}
		if(!check){
			cout<<-1<<endl;
		}
	}
}


