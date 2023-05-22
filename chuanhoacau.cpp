#include<bits/stdc++.h>
using namespace std;
string rmspace(string s){
	for(int i = 0 ; i<s.size() ; i++){
		if(s[i]==' ' && s[i+1]==' '){
			s.erase(i,1);
			i--;
		} 
	}
	return s;
}
string chuanhoa(string a){
	string kq="";
	string s = rmspace(a);
	for(char& c : s){
		if(c=='.' || c =='?' || c== '!'){
			kq=kq+c ;
			kq=kq+"\n";
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
	string kq = chuanhoa(s);
	cout<<kq<<endl;
}


