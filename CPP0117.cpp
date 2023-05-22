#include<iostream>
 using namespace std; void cong(int a) { int c=a; a=0; while(c>0) { int b=c%10; c=c/10; a=a+b; } if(a>=10) { cong(a); } else { cout<<a<<endl; } } int main() { int t; cin>>t; while(t--) { int a; cin>>a; cong(a); } }
