#include<bits/stdc++.h>
using namespace std; 
const int MAX = 155;
int a[MAX][MAX] , b[MAX][MAX];
main(){
	int t;
	cin>>t;
	while(t--){
		int n ;
		cin>>n;
		for(int i = 0 ; i <n ; i++){
			for(int j =0 ; j < n ; j++){
				cin>>a[i][j];
				b[i][j]=a[i][j];
			}
		}
		for(int i=0 ; i<n ; i++){
			if(i%2==0){
				for(int j=0 ; j <n ; j ++ ){
					cout<<a[i][j]<<" ";
				}
			}
			else if(i%2!=0){
				for(int j=n-1 ; j>=0 ; j--){
					cout<<a[i][j]<<" ";
				}
			}
		}
		cout<<endl;
	}
}
