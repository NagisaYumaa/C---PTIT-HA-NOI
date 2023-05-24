#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a , long long b){
	if(b==0) {
		return a; 
	}
	return ucln(b, a%b);
}

void solve(long long a , long long x , long long y ){
	long long p =0 , q = 0 ; 
	for(int i = 0  ; i <x ; i ++  ){
		p = p*10+a;
	}
	for(int i=0 ; i < y ; i++){
		q = q*10 +a;
	}
	long long gcd = ucln(p,q);
	cout<<gcd<<endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long a, x, y;
        cin >> a >> x >> y;
        solve(a, x, y);
    }
    return 0;
}









