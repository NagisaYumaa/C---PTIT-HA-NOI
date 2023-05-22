#include<bits/stdc++.h>
using namespace std;

main(){
int n ; 
cin>>n; 
unsigned long long s=0 ;
unsigned long long gt=1 ;
for(int i=1; i <=n ; i++){
	gt=gt*i;
	s=s+gt;
}
cout<<s<<endl;
}




