#include<iostream>
using namespace std;
const int mod=1e9+7;
int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main(){
	int t; cin>>t;
	while(t--){
		int n, k;
	cin>>n>>k;
	cout<<C(k,n)<<endl;
	}
    
}
 
