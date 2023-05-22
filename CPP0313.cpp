#include <iostream>
#include <string>

using namespace std;

int main() {
    string s ;
    getline(cin,s);
    string t ;
    getline(cin,t);
    int pos = s.find(t);
    while(pos != string ::npos){
    	s.erase(pos,t.length());
    	pos = s.find(t, pos);
	}
	cout<<s<<endl;
}

