#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/**
OnThiKTHP_OOP.pdf :
    Bài 1 :
    Chương trình quản lý điều hòa gồm các lớp được mô tả như sau:
    - Lớp SanPham (sản phẩm) gồm các thuộc tính: Mã sản phẩm, tên sản phẩm, ngày nhập, các
    phương thức nhập, xuất dữ liệu và các phương thức cần thiết khác.
    - Lớp DieuHoa kế thừa tất cả thành phần của lớp SanPham và có thêm các thuộc tính là công
    suất, tên hãng sản xuất, giá bán (triệu đồng), các phương thức nhập, xuất dữ liệu và các phương
    thức cần thiết khác.
    Cài đặt chương trình gồm các yêu cầu:
        - Khai báo các lớp theo mô tả trên.
        - Nhập số nguyên dương n và danh sách n điều hòa.
        - Hiển thị danh sách ra màn hình sau khi nhập.
        - Hiển thị ra màn hình danh sách các điều hòa của hãng hãng Electrolux có giá bán thấp nhất.
        - Tính và in ra màn hình tổng giá bán của các điều hòa có công suất trên 12000W.
*/
class Date
{
private:
    int ngay;
    int thang;
    int nam;
public:
    void NhapDate()
    {
        cout<<"\t\tNhap Ngay : ";
        cin>>ngay;
        cout<<"\t\tNhap thang : ";
        cin>>thang;
        cout<<"\t\tNhap nam : ";
        cin>>nam;
    }
    void XuatDate()
    {
        cout<<ngay<<" / "<<thang<<" / "<<nam;
    }
};
class Sanpham
{
private:
    string maSP;
    char tenSP[20];
    Date time_X;
public:
    void NhapSP()
    {
        cout<<"\tNhap Ma SP : ";
        cin>>maSP;
        fflush(stdin);
        cout<<"\tNhap TenSP : ";
        gets(tenSP);
        time_X.NhapDate();
        fflush(stdin);
    }
    void XuatSP()
    {
        cout<<"\tMa SP : "<<maSP<<endl;
        cout<<"\tTenSP : ";
        puts(tenSP);
        cout<<"\tNgay Nhap : ";
        time_X.XuatDate();
    }
};

class Dieuhoa:public Sanpham
{
private:
    char tenHang[20];
    ///string tenHang;
    int congSuat;
    long giaBan;
public:
    void NhapDieuHoa()
    {
        NhapSP();
        cout<<"\tNhap Ten Hang : ";
        gets(tenHang);
        ///cout<<"\tNhap Ten Hang : ";
        ///cin>>tenHang;
        fflush(stdin);
        cout<<"\tNhap Cong Suat : ";
        cin>>congSuat;
        cout<<"\tNhap Gia Ban : ";
        cin>>giaBan;
    }
    void XuatDieuHoa()
    {
        XuatSP();
        cout<<"\n\tTen Hang : ";
        puts(tenHang);
        cout<<"\tCong Suat : "<<congSuat<<endl;
        cout<<"\tGia Ban : "<<giaBan<<endl;
    }
    int getCongsuat()
    {
        return congSuat;
    }
    int getGiaban()
    {
        return giaBan;
    }
    bool CheckTenHang()
    {
        if(strcmpi(tenHang,"Electrolux")==0)
            return true;
        return false;
    }
};

Dieuhoa *dh;
int n;
void NhapDuLieu()
{
    cout<<"Nhap so luong dieu hoa : ";
    cin>>n;
    fflush(stdin);
    dh = new Dieuhoa [n];
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap Dieu Hoa "<<i<<" : "<<endl;
        dh[i].NhapDieuHoa();
    }
}

void XuatDuLieu()
{
    for(int i=0;i<n;i++)
    {
        cout<<"Dieu Hoa "<<i<<" : "<<endl;
        dh[i].XuatDieuHoa();
    }
}
void DSDH_Electrolux_giaBan_min()
{
    cout<<endl;
    int vitriMin;
    for(int i=0;i<n;i++)
    {
        if(dh[i].CheckTenHang()==true)
        {
            vitriMin = i;
            break;
        }
    }
    /// vi tri min ban dau
    ///dh[vitriMin].XuatDieuHoa();
    for(int j = vitriMin; j<n; j++)
    {
        if(dh[j].getGiaban()<dh[vitriMin].getGiaban()&&dh[j].CheckTenHang()==true)
        {
            vitriMin = j;
        }
    }
    cout<<"Dieu Hoa Hang Electrolux co gia thap nhat la : "<<endl;
    dh[vitriMin].XuatDieuHoa();

}
void TongTienDH_CongSuat_tren12000()
{
    cout<<endl;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(dh[i].getCongsuat()>=12000)
        {
            sum = sum + dh[i].getCongsuat();
        }
    }
    cout<<"Tong Tien Dieu Hoa P >= 12000W : "<<sum<<endl;
}
int main()
{
    cout << "Coding by Manh Quang" << endl;
    NhapDuLieu();
    XuatDuLieu();
    DSDH_Electrolux_giaBan_min();
    TongTienDH_CongSuat_tren12000();
    return 0;
}
