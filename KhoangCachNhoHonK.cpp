#include<bits/stdc++.h>
using namespace std;
	int a[20000];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int count =0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int s = a[j]-a[i];
				if(s<k){
					
					count++;
				}else {
					break;
				}
			}
		}
		cout<<count<<endl;
	}
	
}
