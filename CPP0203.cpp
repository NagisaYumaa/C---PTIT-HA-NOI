#include<bits/stdc++.h>
using namespace std;
const int MAX =1e6 +5;
int mark[MAX] , a[MAX] ; 
int main(){
	int t;
	cin>>t;
	while(t--){
		memset(mark,0,sizeof(mark));
		int n ; 
		cin>>n;
		for(int i = 0 ; i <n ; i ++)
		{
			cin>>a[i];
			if(a[i]>0) mark[a[i]]=1 ;// neu so nhap vao la so duong thi gan vi tri do =1
		}
		int res=1;
		while(mark[res]) {
			res++ ;
		}
		cout<<res<<endl;
	}
}
