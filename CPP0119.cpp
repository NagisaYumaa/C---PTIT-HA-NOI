#include<bits/stdc++.h>
using namespace std;
int check(int a){
	int q=0; 
	for(int i=1 ; i <= sqrt(a) ; i++){
		if(a%i==0){
			if(i%2==0) q++;
			if(a/i%2==0) q++;
			if(i*i==a && a%2==0 ) q--;
		}
	}
	return q;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		cout<<check(a)<<endl;
	}
}
