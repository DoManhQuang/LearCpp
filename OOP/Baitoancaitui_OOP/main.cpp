#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class DoVat
{
private:
    string tenDV;
    int soLuong;
    int trongLuong;
    int giaTien;
public:
    DoVat()
    {

    }
    DoVat(string ten, int sl, int tl, int gt)
    {
        tenDV = ten;
        soLuong = sl;
        trongLuong = tl;
        giaTien = gt;
    }
    void NhapDV()
    {
        cin>>tenDV;
        cin>>soLuong;
        cin>>trongLuong;
        cin>>giaTien;
    }
    void HienDV()
    {
        cout<<"\t"<<setw(4)<<tenDV<<setw(18)<<soLuong<<setw(19)<<trongLuong<<setw(22)<<giaTien;
    }
    string getTenDV()
    {
        return tenDV;
    }
    int getGiaTien()
    {
        return giaTien;
    }
    int getSoLuong()
    {
        return soLuong;
    }
    int getTrongLuong()
    {
        return trongLuong;
    }
    void setGiaTien(int gt)
    {
        giaTien = gt;
    }
    void setTrongLuong(int tl)
    {
        trongLuong = tl;
    }
    void setSoLuong(int sl)
    {
        soLuong = sl;
    }
    void setTenDV(string ten)
    {
        tenDV = ten;
    }
};
int n;
int tlMax; /// trọng lượng max
DoVat *dv;
void NhapDuLieu()
{
    freopen("Data.txt","r",stdin);
    cin>>n;
    cin>>tlMax;
    dv = new DoVat[n];
    for(int i=0; i<n; i++)
    {
        dv[i].NhapDV();
    }
}
void XuatDuLieuDV()
{
    cout<<endl<<setw(4)<<"\tTen DV"<<setw(20)<<"So Luong"<<setw(20)<<"Trong Luong"<<setw(20)<<"Gia Tien\n";
    for(int i=0; i<n; i++)
    {
        dv[i].HienDV();
        cout<<endl;
    }
}

void SapXepTheoGiaTien()
{
    for(int i=0; i<n-1; i++)
    {
        int ma = i;
        for(int j=i+1; j<n; j++)
        {
            if(dv[ma].getGiaTien()<dv[j].getGiaTien())
            {
                ma = j;
            }
        }
        if(ma != i)
        {
            swap(dv[i],dv[ma]);
        }
    }
}

int count_dvc;
DoVat *dvc;
int LayDoVaoTui()
{
    int tongGT = 0; /// tổng giá trị trong túi.
    count_dvc = 0; /// đếm số đồ vật được chọn.
    dvc = new DoVat[n];
    int i = 0;
    while(i!=n)
    {
        if(dv[i].getTrongLuong() <= tlMax && dv[i].getSoLuong() != 0)
        {
            dv[i].setSoLuong(dv[i].getSoLuong() - 1);
            tlMax -= dv[i].getTrongLuong();
            tongGT += dv[i].getGiaTien();
            dvc[count_dvc].setTenDV(dv[i].getTenDV());
            dvc[count_dvc].setSoLuong(1);
            dvc[count_dvc].setTrongLuong(dv[i].getTrongLuong());
            dvc[count_dvc].setGiaTien(dv[i].getGiaTien());
            count_dvc++;
        }
        if(tlMax == 0)
        {
            break;
        }
        else{
            i++;
        }
    }
    return tongGT;
}

void XuatDuLieuDVC()
{
    cout<<endl<<setw(4)<<"\tTen DV"<<setw(20)<<"So Luong"<<setw(20)<<"Trong Luong"<<setw(20)<<"Gia Tien\n";
    for(int i=0;i<count_dvc;i++)
    {
        dvc[i].HienDV();
        cout<<endl;
    }
}
int main()
{
    freopen("Output.txt","w",stdout);
    cout << "Coding by Manh Quang" << endl;
    NhapDuLieu();
    cout<<"\nBang Du Lieu :"<<endl;
    XuatDuLieuDV();
    SapXepTheoGiaTien();
    cout<<"\nBang Du Lieu Sau Khi Sap Xep :"<<endl;
    XuatDuLieuDV();
    int TongTien = LayDoVaoTui();
    cout<<"\nBang Do Vat Duoc Chon Vao Tui :"<<endl;
    XuatDuLieuDVC();
    cout<<endl<<setw(4)<<"\tTong Gia Tri Tien Trong Tui La "<<TongTien<<endl;
    return 0;
}

