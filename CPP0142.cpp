#include<bits/stdc++.h> 
using namespace std; 
int snt(long long n){ 
if(n<2) return false; 
for(int i=2;i<=sqrt(n);i++){ 
if(n%i==0) return false; 
}return true; 
} 
int main(){ 
int t; cin>>t; 
while(t--){ 
int c=0; int n; cin>>n; for(int i=1;i<=n;i++){ 
if(__gcd(i,n)==1) c++; } if(snt(c)) 
cout<<"1";else cout<<"0";cout<<endl; 
} 
}
