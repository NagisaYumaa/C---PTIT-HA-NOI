#include<bits/stdc++.h>
using namespace std;
int ngto(int n)
{
	if (n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0 ;
	}
	return 1;
}

main(){
	int a;
	cin>>a; 
	while(a--){
		int x;
		cin>>x ;
		int count = 0;
		for(int i=2 ; i<=x; i ++ ){
			while(x%i==0){
				x=x/i;
				count++ ;
			}
			if(count!=0){
			cout<<i<<" "<<count<<" ";	
			}
			count=0;
		}
		cout<<endl;
	}
}


