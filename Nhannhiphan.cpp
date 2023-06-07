#include<bits/stdc++.h>
using namespace std;
unsigned long long BinToDec(string s)
{
    unsigned long long p = 0;
    unsigned long long decNumber = 0;
    for(int i=0;i<s.length();i++){
    		decNumber*=2;
    		decNumber+=s[i]-'0';
		}
    return decNumber;
}
main(){
	int t;
	cin>>t;
	while(t--){
	string a , b;
cin>>a >> b ;
cout<<(unsigned long long)BinToDec(a)*BinToDec(b)<<endl; 
	}

}
