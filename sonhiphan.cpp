#include<bits/stdc++.h>
using namespace std;
int getbit(int x , int i){
	return (x>>i)&1 ;
}
main(){
	int n ; cin>>n; 
for(int x=0 ; x<1<<n; x++){
		for(int i=0 ; i<n ; i++)
		cout<<getbit(x,i) ;
		cout<<endl;
	}
}


