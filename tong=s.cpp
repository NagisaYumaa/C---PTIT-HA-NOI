#include<bits/stdc++.h>
using namespace std;

main(){
int t ;
cin>>t;
while(t--){
	int n ,s ;
	int a[200];
	int d[40001]={0};
	cin>>n>>s;
	for(int i=0 ;i<n;i++)
		cin>>a[i];
	//baitoancoso
	d[0]=1;
	for(int i=0;i<n;i++)
		for(int k=s ;k>a[i];k--)
			d[k]=max(d[k],d[k-a[i]]);
		//kq
	if(d[s])cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}	
}


