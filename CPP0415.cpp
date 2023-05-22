#include<bits/stdc++.h>
using namespace std;
int cmp(int a , int b)
{
    return a>b;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int m,n;
        cin>>m>>n;
        int a[m], b[n];
        for (int i = 0; i < m; i++)
        {
            /* code */
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        sort(a,a+m,cmp);
        sort(b,b+n);
        cout<<(long long)a[0]*b[0]<<endl;
    }
    
}
