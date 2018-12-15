#include <iostream>
#include <bits/stdc++.h>
using namespace std;
///Cau 1
void Cau1()
{
    int a,X0;
    float X1 , ketQua;
    cout<<"Nhap so A = ";
    cin>>a;
    X0 = a;
    X1 = ((X0*X0) + a)/(2*X0);
    ketQua = ((X1*X1) + a)/(2*X1);
    while(abs((ketQua/X1)-1) >= 0.00001)
    {
        X1 = ketQua;
        ketQua = ((X1*X1) + a)/(2*X1);
    }
    cout<<" Can Bac 2 cua "<<a<<" la : "<<ketQua<<endl;
}
///Cau2
struct Diem
{
    int x;
    int y;
    void Nhaptoado()
    {
        cout<<"\tNhap X : ";
        cin>>x;
        cout<<"\tNhap Y : ";
        cin>>y;
    }
    void Xuattoado()
    {
        cout <<" ("<<x<<" , "<<y<<") "<<endl;
    }
};
Diem d[100];
int nDiem;
void NhapDiem()
{
    cout<<"Nhap so diem : ";
    cin>>nDiem;
    for(int i=0;i<nDiem;i++)
    {
        cout<<"Diem "<<i<<endl;
        d[i].Nhaptoado();
    }
}
void XuatDiem()
{
    for(int i=0;i<nDiem;i++)
    {
        cout<<"Diem "<<i;
        d[i].Xuattoado();
    }
}
void KhoangcachMax()
{
    float kcMax = sqrt((d[0].x-d[1].x)*(d[0].x-d[1].x)+(d[0].y-d[1].y)*(d[0].y-d[1].y));
    for(int i=0;i<nDiem;i++)
    {
        for(int j=i+1;j<nDiem;j++)
        {
            float kc2Diem = sqrt((d[i].x-d[j].x)*(d[i].x-d[j].x)+(d[i].y-d[j].y)*(d[i].y-d[j].y));
            if(kc2Diem > kcMax)
            {
                kcMax = kc2Diem;
            }
        }
    }
    cout<<"Khoang Cach 2 Diem Xa Nhat : "<<kcMax<<endl;
}
/// Cau 3
int *a;
int n;
int nDay1 , nDay2;
void NhapMang()
{
    cout<<"Nhap so luong PT day 1 : ";
    cin >>nDay1;
    cout<<"Nhap so luong PT day 2 : ";
    cin>>nDay2;
    n = nDay1 + nDay2;
    a = new int [n];
    for(int i=0;i<nDay1;i++)
    {
        cout<<"A "<<i<<" : ";
        cin>>a[i];
    }
    for(int i=nDay1;i<n;i++)
    {
        cout<<"A "<<i<<" : ";
        cin>>a[i];
    }
}
void XuatMang()
{
    cout<<"Day Mang vua nhap vao : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"\tA "<<i<<" : "<<a[i];
    }
}
void DSPT_TrungNhau()
{
    cout<<endl<<"PT Trung Nhau : "<<endl;
    ///freopen("data.txt","w",stdout);
    for(int i=0;i<nDay1;i++)
    {
        for(int j=nDay1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<"\tA "<<i<<" : "<<a[i];
            }
        }
    }
}
int main()
{
    cout << "Coding by Manh Quang" << endl;
    ///Cau1();
    /// Cau 2 :
    //NhapDiem();
    //XuatDiem();
    //KhoangcachMax();
    ///Cau 3 :
    //NhapMang();
    //XuatMang();
    //DSPT_TrungNhau();
    return 0;
}




