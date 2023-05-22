#include<bits/stdc++.h>
using namespace std;
int chanle(int n){
	int count_c=0;
	int count_l=0;
	while(n>0){
		int a = n%10 ;
		n=n/10; 
		if(a%2 == 0 ){
			count_c++;
		}
		else count_l++;
	}
	if(count_c==count_l) return 1;
	return 0;
}

main(){
	int n;
	cin>>n;
	int dem=0;
	for(int i=pow(10,n-1) ; i<pow(10,n);i++){
		if(chanle(i)){
		dem++;
		cout<<i<<" ";
	
		if(dem%10==0){
			dem=0;
			cout<<endl;
				}
			}
	}
}


