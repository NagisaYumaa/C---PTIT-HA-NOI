#include<bits/stdc++.h>
using namespace std;
bool ipcheck(string ip){
	vector<int> parts;
	stringstream ss(ip);
	string part;
	while(getline(ss,part,'.')){
		try{
			int num = stoi(part);
			if(num < 0 || num > 255){
				return false ;
			}
			parts.push_back(num);
		}
		catch(...){
			return false ;
		}
	}
	return parts.size() == 4;
}

main(){
	int t;
	cin>>t;
	while(t--){
	string ip ;
	cin>>ip
	;if(ipcheck(ip)){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	}
	
}


