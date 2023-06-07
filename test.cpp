#include<iostream>
using namespace std;
#include<cmath> // thu vi?n toán h?c


bool Kiem_Tra_So_Chinh_Phuong(int n)
{
	int ketqua = (int)sqrt(n * 1.0);
	if(ketqua * ketqua == n)
	{
		return true; // n là s? chính phuong
	}
	return false; // n không ph?i là s? chính phuong
}

void Nhap_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}


void Xuat_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}

void Xoa(int a[], int &n, int vitrixoa)
{
	for(int i = vitrixoa + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--; // s? lu?ng ph?n t? m?ng gi?m
}

// hàm x? lí xóa các ph?n t? trùng nhau
void Xoa_Phan_Tu_Trung(int a[], int &n)
{
	// vòng l?p duy?t t?ng ph?n t? c?a m?ng
	for(int i = 0; i < n - 1; i++)
	{
		// vòng l?p duy?t các ph?n t? n?m sau a[i] - n?u phía sau a[i] mà có ph?n t? a[j] trùng v?i a[i] thì xóa ph?n t? a[j] di - tuong duong xóa ph?n t? t?i v? trí j
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				Xoa(a, n, j);
				i--; // n?u không có i-- s? x?y ra l?i gì ?
			}
		}
	}
}


int main()
{

	int a[100]; // m?ng ch?a 100 ph?n t? s? nguyên
	int n; // s? lu?ng ph?n t? c?a m?ng
	cout << "\nNhap so luong phan tu mang: ";
	cin >> n;
	cout << "\n\n\t\tNHAP MANG\n";
	Nhap_Mang(a, n);
	cout << "\n\n\t\tXUAT MANG\n";
	Xuat_Mang(a, n);
	// g?i hàm x? lí
	Xoa_Phan_Tu_Trung(a, n);
	cout << "\n\n\t\tMANG SAU KHI XOA PHAN TU TRUNG\n";
	Xuat_Mang(a, n);
	return 0;
}


