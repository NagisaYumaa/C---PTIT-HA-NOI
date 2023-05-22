#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0 ; i <n ; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
}
void xuli(int a[],int n){
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
	cout<<a[n-1]<<" ";
	cout<<endl;
}
main(){
	int t;
	cin>>t ;
	while(t--)
	{
		int n;
	cin>>n;
	int a[10009];
	nhap(a,n);
	xuli(a,n);
	}

}


