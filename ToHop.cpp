#include<bits/stdc++.h>
using namespace std;
int C[1001][1001];
int M=1e9+7;
void tinh() {
	for (int i=0; i<=1000; i++)
		for (int j=0; j<=i; j++)
			if (j==0 || j==i) C[i][j]=1;
			else C[i][j] = (C[i-1][j] + C[i-1][j-1])%M;
}
int main() {
	int n,k; 
		
	tinh();
		cin>>n>>k;
		if(n==k) cout<<2
		;else{
			cout<<C[n][k]<<endl;
		}
		
}
