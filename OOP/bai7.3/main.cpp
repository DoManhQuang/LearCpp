#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Ban
{
private:
    string MaBan;
    string TenBan;
    string NgayThangLap;
};
class Khoa
{
private:
    string MaKhoa;
    string TenKhoa;
    string TruongKhoa; // Trưởng Khoa
};
class TruongDH
{
private:
    Khoa *k;
    int n;
    Ban *b;
    int m;
public:
    void NhapTDH();
    void XuatTDH();

};
class Truong
{
private:
    string MaTruong;
    string TenTruong;
    string DiaChi;
public:
    void NhapTruong();
    void XuatTruong();
};

void TruongDH::NhapTDH()
{
    cin>>n;
    cin>>m;
    fflush(stdin);
    k = new Khoa [n];
    b = new Ban [m];
    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        cin>>k[i].MaKhoa;
        cin>>k[i].TenKhoa;
        cin>>k[i].TruongKhoa;
    }
    for(int j=0;j<m;j++)
    {
        fflush(stdin);
        cin>>b[j].MaBan;
        cin>>b[j].TenBan;
        cin>>b[j].NgayThangLap;
    }
}
void TruongDH::XuatTDH()
{
    for(int i=0;i<n;i++)
    {
        cout<<"\tMaKhoa : "<<k[i].MaKhoa<<<", TenKhoa : "<<k[i].TenKhoa<<", TruongKhoa : "<<k[i].TruongKhoa<<endl;
    }
    cout<<endl;
    for(int j=0;j<m;j++)
    {
        cout<<"\tMaBan : "<<b[j].MaBan<<", TenBan : "<<b[j].TenBan<<", NgayThangLap : "<<b[j].NgayThangLap<<endl;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
