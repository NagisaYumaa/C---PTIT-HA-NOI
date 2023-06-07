#include<bits/stdc++.h>
using namespace std;
main(){
int t; 
cin>>t; 
while(t--){
	int a[1001], n, dem =0 ;
	cin>>n;
	for(int i=1 ;i<=n ; i++){
		cin>>a[i];
		if(a[i]==0) dem++;
		}
		cout<<dem<<endl;
	}
	
}


