#include<bits/stdc++.h>
using namespace std;
int n , a[1000005],b[1000005],f[1000005];
void xuly(){
	cin>>n;
	memset(f,0,sizeof(f));
	for(int i=0 ; i<n ;i ++ ){
		cin>>a[i];
		f[a[i]]++;
	}
		stack<int > val,pos;
		for(int i=0;i<n;i++){
			while(val.size()&&f[a[i]]>f[val.top()]){
				b[pos.top()]=i;
				val.pop();pos.pop();
			}
			val.push(a[i]);
			pos.push(i);
		}
		while	(val.size()){
			b[pos.top()]=-1;
			val.pop();
			pos.pop();
		}
		for(int i=0 ; i < n ; i ++){
			if(b[i]!=-1) cout<<a[b[i]]<<' ';
			else cout<<-1<<' ';
		} cout<<endl;
}
main(){
int t;
	cin>>t;
	while(t--){
		xuly();
	}
}


