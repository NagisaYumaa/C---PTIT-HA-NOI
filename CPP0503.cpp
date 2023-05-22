#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tuSo;
	long long mauSo;
};

void nhap(PhanSo& ps){
	cin>>ps.tuSo>>ps.mauSo;
}

long long ucln(long long a , long long b){
	if(b==0){
		return a;
	} 
	return ucln(b, a%b) ;
}

void rutgon(PhanSo& ps){
	long long uc = ucln(ps.tuSo , ps.mauSo);
	ps.tuSo= ps.tuSo / uc;
	ps.mauSo=ps.mauSo / uc ;
}

void in(PhanSo& ps){
	cout<<ps.tuSo<<"/"<<ps.mauSo
;}
main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}


