#include<bits/stdc++.h>
using namespace std;
const int MAX =1005 ;
int a[MAX][3];
main(){
	int n; cin >>n;	
	int check=0 ;
	for(int i = 0 ; i < n ; i++ ){	
		for(int j = 0 ; j < 3 ; j++ ){
			cin>>a[i][j];
			}
		}
		
		
		for(int i = 0 ; i < n ; i++ ){	
			int dem=0;
			for(int j = 0 ; j < 3 ; j++ ){
				if(a[i][j]==1){
				dem++;
					if(dem==2){
						check++;
						break;
					}	
				}	
			}
		}
		cout<<check<<endl;
	}



