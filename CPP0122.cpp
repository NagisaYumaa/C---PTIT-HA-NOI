#include <bits/stdc++.h>
using namespace std;
 int main() {
  int t; cin>>t; while(t--){
   int n; cin>>n; long long k=1; for(long long i=1;i<=n;i++){ k=k*i/__gcd(k,i); } cout<<k<<endl; } }
