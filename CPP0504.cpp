#include<bits/stdc++.h>
using namespace std;
//chiu thua khong hieu sao wa luong :<
struct SinhVien {
	string ten ;
	string maSv;
	string ngaySinh ;
	float gPA ; 
};

string chuanhoangaysinh(string& ngaySinh) {
    stringstream ss(ngaySinh);
    int ngay, thang, nam;
    char delimiter;
    ss >> ngay >> delimiter >> thang >> delimiter >> nam;

    stringstream ssChuanHoa;
    ssChuanHoa << setfill('0') << setw(2) << ngay << "/" << setw(2) << thang << "/" << setw(4) << nam;

    return ssChuanHoa.str();
}


void nhap(SinhVien& sinhVien){
	getline(cin, sinhVien.ten);
	getline(cin, sinhVien.maSv);
	getline(cin, sinhVien.ngaySinh);
	cin>>sinhVien.gPA;
}
void in(SinhVien& sinhVien){
	cout<<sinhVien.ten<<" "<<sinhVien.maSv<<" "<<chuanhoangaysinh(sinhVien.ngaySinh)<<" "<<fixed<<setprecision(2)<<sinhVien.gPA<<endl;
}
main(){
	struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}


