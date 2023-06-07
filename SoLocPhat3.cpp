#include<bits/stdc++.h>
using namespace std;
void xuly(){
	int n;
	cin>>n;
	queue<string>q;
	q.push("6");q.push("8");
	vector<string>res ;
	while(q.front().size()<=n)
	{
		string temp=q.front();
		res.push_back(temp);
		q.pop();
		q.push(temp+"6");
		q.push(temp+"8");
	}
	cout<<res.size()<<endl;
	for(int i=res.size()-1;i>=0;i--)
		cout<<res[i]<<' ';
	cout<<endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		xuly();
	}
}
