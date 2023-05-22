#include<bits/stdc++.h>
using namespace std;
string chuoi(string s){
	string kq="";
	for(char& c:s){
		if (isalpha(c)) {
			if(isupper(c)){
				kq += char((c-'A'+2)%26+'A');
			}
			else{
				kq +=char((c-'a'-2+26)%26+'a');
			}
		}
		else{
			kq=kq+c;
		}
		}
	return kq;
}
main(){
	string s;
	getline(cin,s);
	string s2 = chuoi(s) ;
	cout<<s2<<endl;
}


