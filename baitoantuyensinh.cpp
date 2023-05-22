#include<bits/stdc++.h>
using namespace std;

main(){
//	string s1;
//	cin>>s1;
	string s2;
	getline(cin,s2);
//	cin.ignore();
	string s1;
	getline(cin,s1);
//	cin.ignore();
	

	double d1,d2,d3;
	cin>>d1>>d2>>d3;
	double s = d1*2+d2+d3 ;
	double diem=s;
	double point=0;
	if(s2[2]=='1'){
		point=0.5;
		s=s+0.5;
	}
	else if(s2[2]=='2'){
		point=1.0;
		s=s+1.0;
	}
	else if(s2[2]=='3'){
		point=2.5;
		s=s+2.5;
	}
	cout<<s2<<" "<<s1<<" "<<point<<" "<<diem<<" ";
	if(s<24){
		cout<<"TRUOT"<<endl;
	}
	else{
		cout<<"TRUNG TUYEN"<<endl;
	}
}


