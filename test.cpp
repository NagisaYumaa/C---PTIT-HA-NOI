#include<iostream>
using namespace std;
#include<cmath> // thu vi?n to�n h?c


bool Kiem_Tra_So_Chinh_Phuong(int n)
{
	int ketqua = (int)sqrt(n * 1.0);
	if(ketqua * ketqua == n)
	{
		return true; // n l� s? ch�nh phuong
	}
	return false; // n kh�ng ph?i l� s? ch�nh phuong
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

// h�m x? l� x�a c�c ph?n t? tr�ng nhau
void Xoa_Phan_Tu_Trung(int a[], int &n)
{
	// v�ng l?p duy?t t?ng ph?n t? c?a m?ng
	for(int i = 0; i < n - 1; i++)
	{
		// v�ng l?p duy?t c�c ph?n t? n?m sau a[i] - n?u ph�a sau a[i] m� c� ph?n t? a[j] tr�ng v?i a[i] th� x�a ph?n t? a[j] di - tuong duong x�a ph?n t? t?i v? tr� j
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				Xoa(a, n, j);
				i--; // n?u kh�ng c� i-- s? x?y ra l?i g� ?
			}
		}
	}
}


int main()
{

	int a[100]; // m?ng ch?a 100 ph?n t? s? nguy�n
	int n; // s? lu?ng ph?n t? c?a m?ng
	cout << "\nNhap so luong phan tu mang: ";
	cin >> n;
	cout << "\n\n\t\tNHAP MANG\n";
	Nhap_Mang(a, n);
	cout << "\n\n\t\tXUAT MANG\n";
	Xuat_Mang(a, n);
	// g?i h�m x? l�
	Xoa_Phan_Tu_Trung(a, n);
	cout << "\n\n\t\tMANG SAU KHI XOA PHAN TU TRUNG\n";
	Xuat_Mang(a, n);
	return 0;
}


