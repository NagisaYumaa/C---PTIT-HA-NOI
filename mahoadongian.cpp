#include<bits/stdc++.h>
using namespace std;

main(){
	string s;
	getline(cin,s);
	for(int i=0 ; i<s.length();i++){
		if(isalpha(s[i])){
			if(isupper(s[i])){
				s[i]=char((int(s[i]-'A'+2)%26)+'A');
			}
			else{
				int nc= int(s[i]-'a'-2)%26;
				if(nc<0){
					nc+=26;
				}
				s[i]=char(nc+'a');
			}
		}
	}
	cout<<s<<endl;
}


