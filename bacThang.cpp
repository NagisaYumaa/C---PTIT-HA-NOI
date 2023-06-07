#include<bits/stdc++.h>
using namespace std;
typedef long long li;
int M = 1e9+7, n, k;
li F[100001];
li solve() {
    int i, j;
    memset(F, 0, sizeof(F));
    F[1] = 1;
    for(i=2; i<=k; i++) {
        for (j=1; j<i; j++)
            F[i] = (F[i] + F[j])%M;
        F[i] += 1;
    }
    for(i=k+1; i<=n; i++)
        for(j=i-1; j>=i-k; j--)
            F[i] = (F[i] + F[j])%M;
    return F[n];
}
int main() {
    int t; cin>>t;
    while (t--) {
        cin>>n>>k;
        cout<<solve()<<endl;
    }
}
