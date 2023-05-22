#include<bits/stdc++.h>
#include<complex>
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		double a1 , a2 , b1 , b2 ;
		cin>>a1>>a2>>b1>>b2;
		complex<double> A(a1,a2);
		complex<double> B(b1,b2);
		
		complex<double> C=pow(A+B , 2.0);
		
		cout<<C.real()<<"+"<<C.imag()<<"i"<<endl;
	}
}


