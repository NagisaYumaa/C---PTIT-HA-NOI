#include<iostream>
#include<iomanip>
using namespace std;

void xuat( int a[], int n){
 for(int i = 0; i < n; i++)
  cout << setw(5) << a[i];
 cout << endl;
}

void sinh( int a[], int n, int &ok){
 int i = n-1;
 while( i >= 0 && a[i] == 1){
  a[i] = 0;
  i--;
 }
 if( i >= 0){
  a[i] = 1;
 }
 else ok = 0;
}

int ktmang(int a[100], int n) {
 int i = 0;
 int j = n - 1;
 while( i < n/2) {
  if(a[i] != a[j])
   return 0;
  i++;
  j--;
 }
 return 1;
}

void sinhlientuc(int a[], int n, int ok, int kq[1000][100], int &demKq){
 while(ok){
  if(ktmang(a, n)){
   for(int i = 0; i < n; i++)
    kq[demKq][i] = a[i];
   demKq++;
  }
  sinh(a,n,ok);
  
 }
}

void inKetqua(int kq[1000][100], int demKq, int n){
 cout << demKq<<endl;
 for(int i = 0; i < demKq; i++){
  for(int j = 0; j < n; j++)
   cout << setw(2) << kq[i][j];
  cout << endl;
 }
}

int main(){
 int n;
 int ok=1;
 int a[100] = {};
 int kq[1000][100];
 int demKq = 0;
 cin >> n;
 sinhlientuc(a, n, ok, kq, demKq);
 inKetqua(kq, demKq, n);

}
