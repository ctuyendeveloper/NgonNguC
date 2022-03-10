#include <iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
int tongam(int a[], int n);
int main()
{
    int a[100], n, m;
    cout<<"Nhap slpt n= "; cin>>n;
    nhap(a,n);
    cout<<"cac phan tu mang A la:\n";
    xuat(a,n);
    cout<<endl;
    cout<<" Tong cac gia tri am trong mang la: ";
    int tong = tongam(a,n);
    cout<<tong;
}
void nhap(int a[], int &n)
{
    for (int i=0; i<n; i++)
    {
        cout<<"A["<<i<<"]= "; cin>>a[i];
    }
}
void xuat(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int tongam(int a[], int n)
{
    int s = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            s = s + a[i];
        }
    }
    return s;
}