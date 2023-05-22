#include<bits/stdc++.h>
using namespace std;

main(){
	string s ;
	getline (cin , s);
	for(int  i= 0 ; i < s.size() ; i ++){
		if(isalpha(s[i])){
			if(islower(s[i])){
				s[i]= char((int (s[i] - 'a' + 2) % 26) + 'a');
			}
			else {
				int nc = int (s[i] - 'A' - 2) % 26 ;
				if(nc < 0){
					nc+=26;
				}
				s[i] = char(nc + 'A');
			}
		}
	}
	cout<<s<<endl;
}


