#include<bits/stdc++.h>
using namespace std;
int nt(int n){
	if(n<2) return 0 ; 
	for(int i = 2 ; i <= sqrt(n) ; i ++){
		if(n%i == 0){
			return 0 ;
		}
	}
	return 1;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n ;
		cin>>n;
		int a[n][n];
		int i= 0 , j = 0 , k = 2 , count = 0 ;
		while(count < n*n){
			for(int p  = j ; p < n - j ; p ++){
				a[i][p] = k ;
				if(nt(k)){
					cout<<k<<" ";
				}
				k++;
				count++;
			}
			for(int p = i+1 ; p<n-i ; p++){
				a[p][n-j-1] = k ;
				if(nt(k)){
					cout<<k<<" ";
				}
				k++;
				count++;
			}
			for(int p = n-j-2 ; p >=j ; p --){
				a[n-i-1][p] = k;
				if(nt(k)){
					cout<<k<<" ";
				}
				k++;
				count++;
			}
			for(int p = n-i-2 ; p> i ; p --){
				a[p][j]= k ;
				if(nt(k)){
					cout<<k<<" ";
				}
				k++;
				count++;
			}
			i++;
			j++;
		}
	}
}


