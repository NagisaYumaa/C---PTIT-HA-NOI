	#include<bits/stdc++.h>
	using namespace std;
	
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n,k;
			cin>>k>>n;
			if(n*9<k){
				cout<<-1<<endl;
				continue;
			}
			int d=(k-1)/9;
			
			int s[5000]={1};
			for(int i=0;i<d;i++){
				s[n-i-1]=9;
			
			}
			s[n-d-1]+=k-d*9-1;
			for(int i=0;i<n;i++){
				cout<<s[i];
			}
			cout<<endl;
		}
		
	}
