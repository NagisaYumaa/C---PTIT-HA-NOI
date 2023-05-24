#include<bits/stdc++.h>
using namespace std ;
int kiemtra(int a[],int l,int r){
	//timvitriogiua
	int dinh=l;
	for(int i = l ; i <=r ; i++){
		if(a[i]>a[dinh]){
			dinh = i ;
		}
	}
	//kiemtraphantuthunhattang
	for(int i =l+1 ; i<=dinh ; i++){
		if(a[i]<=a[i-1]){
			return 0;
		}
	}
	//kiemtraphantuthu2
	for(int i=dinh+1 ; i<=r ; i++){
		if(a[i]>=a[i-1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n , l , r ;
		cin>>n;
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin>>a[i]
		;}
		cin>>l>>r;
		if(kiemtra(a,l,r)){
			cout<<"Yes"<<endl;
		}
		else {
			cout<<"No"<<endl;
		}
	}
}
