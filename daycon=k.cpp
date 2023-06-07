#include<bits/stdc++.h>
using namespace std;
int n,a[100000] ;
int l[100000];
main(){
	cin>>n ;
	for(int i=1 ; i<n ; i++)
	cin>>a[i];
	for(int k=1 ; k<n ; k++)
		for(int i=0 ; i<k ; i++)
			if(a[k] > a[i] && l[k]<l[i]+1){
				l[k]=l[i]+1;
				cout<<l[k]<<" ";
			}
	int kmax=0 , lmax=l[kmax];
	for(int i=1 ; i<n ; i++){
		lmax = l[i];
		kmax = i ;
	}
	//cout<<endl;
	cout<<lmax;
}


