#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		long long b[n];
		for(int i = 0 ; i < n ; i ++){
			cin>>a[i];
			b[i]=-1;
		}
		sort(a,a+n);
		for(int i=0 ; i <n ; i++){
			for (int j=0 ; j<n ; j++){
				if (i==a[j]){
					b[i]=i;
				}
			}
		}
		for(int i = 0 ; i < n  ; i ++){
			cout<<b[i]<<" ";
			//	break;
		}
		cout<<endl;
	}
}


