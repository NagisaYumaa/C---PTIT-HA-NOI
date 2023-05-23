#include<bits/stdc++.h>
using namespace std;
//test ?úng r?i nh?ng k?t qu? WA ? 
struct PhanSo{
	int tuSo;
	int mauSo;
};

void nhap(PhanSo& phanSo){
	cin>>phanSo.tuSo>>phanSo.mauSo;
}

int ucln(int a, int b){
	if(b==0) return a ;
	return ucln(b,a%b);
}

PhanSo rutGonPhanSo(PhanSo phanSo){
	int gcd = ucln(phanSo.tuSo,phanSo.mauSo);
	phanSo.tuSo /=gcd;
	phanSo.mauSo /=gcd;
	return phanSo;
}

PhanSo tong(PhanSo p , PhanSo q){
	PhanSo s ;
	s.tuSo = p.tuSo*q.mauSo+q.tuSo*p.mauSo;
	s.mauSo = p.mauSo*q.mauSo;
	return rutGonPhanSo(s); 
}

void in(PhanSo& phanSo){
	cout<<phanSo.tuSo<<"/"<<phanSo.mauSo;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}


