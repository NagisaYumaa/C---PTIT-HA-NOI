#include<bits/stdc++.h>
using namespace std;
struct ThiSinh {
	string ten;
	string ngaySinh;
	float diemMon1;
	float diemMon2;
	float diemMon3;
	float tongDiem;
};

void nhap(ThiSinh &thiSinh){
	getline(cin, thiSinh.ten);
	getline(cin, thiSinh.ngaySinh);
	cin>>thiSinh.diemMon1;
	cin>>thiSinh.diemMon2;
	cin>>thiSinh.diemMon3;
	
	thiSinh.tongDiem= thiSinh.diemMon1+thiSinh.diemMon2+thiSinh.diemMon3;
}

void in(ThiSinh &thiSinh){
	cout<<thiSinh.ten<<" "<<thiSinh.ngaySinh<<" ";
	cout<<fixed<<setprecision(1)<<thiSinh.tongDiem;
}
main(){
	struct ThiSinh(A);
	nhap(A);
	in(A);
	return 0;
}


