#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Date
{
private:
    int ngay;
    int thang;
    int nam;
public:
    void NhapDate()
    {
        fflush(stdin);
        cout<<endl;
        cout<<"\t Nhap Ngay : ";
        cin>>ngay;
        cout<<"\t Nhap Thang : ";
        cin>>thang;
        cout<<"\t Nhap Nam : ";
        cin>>nam;
        fflush(stdin);
    }
    void XuatDate()
    {
        cout<<ngay<<" / "<<thang<<" / "<<nam<<endl;
    }
};
class HangHoa
{
private:
    string tenHang;
    int donGia;
    int soLuong;
public:
    void NhapHH()
    {
        fflush(stdin);
        cout<<endl;
        cout<<"\tNhap TenHang : ";
        cin>>tenHang;
        cout<<"\tNhap DonGia : ";
        cin>>donGia;
        cout<<"\tNhap SoLuong : ";
        cin>>soLuong;
        fflush(stdin);
    }
    int getThanhtien()
    {
        return donGia*soLuong;
    }
    void XuatHH()
    {
        cout<<endl;
        cout<<tenHang<<"\t\t\t"<<donGia<<"\t\t"<<soLuong<<"\t\t"<<getThanhtien();
        cout<<endl;
    }
};
class PhieuMuaHang
{
private:
    string maPhieu;
    string tenKH;
    Date time;
    HangHoa *hh;
    int n;
public:
    void NhapPMH()
    {
        fflush(stdin);
        cout<<endl;
        cout<<"Nhap Ma Phieu : ";
        cin>>maPhieu;
        cout<<"Nhap Ten Khach Hang : ";
        cin>>tenKH;
        fflush(stdin);
        time.NhapDate();
        cout<<"Nhap so luong HH : ";
        cin>>n;
        fflush(stdin);
        hh = new HangHoa [n];
        for(int i=0;i<n;i++)
        {
           hh[i].NhapHH();
        }
    }
    void XuatPMH()
    {
        cout<<endl<<endl;
        cout<<"\t\t\t\tPHIEU MUA HANG"<<endl;
        cout<<"\tMa Phieu : "<<maPhieu<<"\t\tKhach Hang : "<<tenKH<<endl;
        cout<<"\t Ngay Lap : ";time.XuatDate();
        cout<<" Danh Muc Hang Hoa "<<endl;
        cout<<"Ten Hang\t\tDonGia\t\tSoLuong\t\tThanhTien"<<endl;
        for(int i=0;i<n;i++)
        {
            hh[i].XuatHH();
        }
    }
};
int main()
{
    cout << "Coding by Manh Quang" << endl;
    PhieuMuaHang phm;
    phm.NhapPMH();
    phm.XuatPMH();
    return 0;
}















