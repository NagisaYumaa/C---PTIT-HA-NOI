#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void Xoa(int a[], int &n, int vitrixoa)
{
	for(int i = vitrixoa + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--; 
}
void xuly(int a[], int &n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				Xoa(a, n, j);
				i--; 
				j--;
			}
		}
	}
}

void in(int a[], int n){
	for(int i=0 ; i< n ; i++){
		cout<<a[i]<<" ";
	}
}
main(){
int n,a[100];cin>>n;
nhap(a,n);
xuly(a,n);
in(a,n);
}


