#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string hoTen;
	string gioiTinh;
	string ngaySinh;
	string diaChi;
	string maSoThue;
	string ngayKyHD;
};

void nhap(NhanVien &nhanVien){
	getline(cin,nhanVien.hoTen);
	getline(cin,nhanVien.gioiTinh);
	getline(cin,nhanVien.ngaySinh);
	getline(cin,nhanVien.diaChi);
	getline(cin,nhanVien.maSoThue);
	getline(cin,nhanVien.ngayKyHD);
}

void in(NhanVien &nhanVien){
	cout<<"00001"<<" "<<nhanVien.hoTen<<" "<<nhanVien.gioiTinh<<" "<<nhanVien.ngaySinh<<" "<<nhanVien.diaChi<<" "<<nhanVien.maSoThue<<" "<<nhanVien.ngayKyHD;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}


