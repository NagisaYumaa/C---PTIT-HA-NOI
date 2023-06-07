#include<bits/stdc++.h>
using namespace std;
int n;
string a;
void inkq(){
	for(int i=1 ; i<= n ; i++)
	cout<<a[i];
	cout<<" ";

}
void sinhnhiphan(int i){
	for (int j = 0 ; j <= 1 ; j++){
		a[i] = j+'A' ; 
		if(i==n) inkq();
		else sinhnhiphan(i+1);
	}
}
int main(){
	int t;
	cin>>t ;
	while(t--){
cin>>n;
sinhnhiphan(1);
	cout<<endl;		
	}

}


