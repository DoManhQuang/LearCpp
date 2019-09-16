#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/**
Chương trình quản lý xe máy gồm các lớp được mô tả như sau:
- Lớp Xe gồm các thuộc tính là họ và tên chủ sở hữu, biển số, nơi đăng ký (huyện – tỉnh), ngày
đăng ký và các phương thức nhập xuất dữ liệu.
- Lớp XeMay (xe máy) kế thừa tất cả các thành phần của lớp Xe, có thêm các thuộc tính là giá
tiền, màu sơn, các phương thức nhập, xuất dữ liệu và các phương thức cần thiết khác.
Cài đặt chương trình gồm các yêu cầu:
- Khai báo các lớp theo mô tả trên.
- Nhập số nguyên dương n và danh sách n xe máy.
- Hiển thị danh sách ra màn hình.
- Tính tổng giá tiền của những xe máy màu đỏ.
- Xóa xe máy ở vị trí thứ k, k nhập từ bàn phím.
- Hiển thị ra màn hình những xe máy đăng ký năm 2016 và có giá tiền cao nhất.
*/
/**
Tham khảo các hàm return chuỗi
char[10] testfunc()
{
    char[10] str;

    return str;
}
char* testfunc()
{
    char* str = malloc(10 * sizeof(char));
    return str;
}
char *testfunc() {
    char* arr = malloc(100);
    strcpy(arr,"xxxx");
    return arr;
}
char *testfunc() {
    char* arr = malloc(100);
    strcpy(arr,"xxxx");
    return arr;
}
*/

class Xe
{
private:
    char tenChuxe[30];
    char bienSo[10];
    char noiDK[20];
    char ngayDK[10];
public:
    void NhapXe()
    {
        fflush(stdin);
        cout<<"Nhap Ten Chu Xe : ";
        gets(tenChuxe);
        cout<<"Nhap Bien So : ";
        gets(bienSo);
        cout<<"Nhap Noi Dang Ky : ";
        gets(noiDK);
        cout<<"Nhap Ngay Dang Ky : ";
        gets(ngayDK);
        fflush(stdin);
    }
    void XuatXe()
    {
        cout<<endl<<"\tChu Xe : ";
        puts(tenChuxe);
        cout<<"\tBien So :";
        puts(bienSo);
        cout<<"\tNoi DK : ";
        puts(noiDK);
        cout<<"\tNgay Dk :";
        puts(ngayDK);
    }
};
class Xemay:public Xe
{
private:
    string mauSon;
    int giaTien;
public:
    void NhapXemay()
    {
        NhapXe();
        cout<<"Nhap Mau Son : ";
        cin>>mauSon;
        cout<<"Nhap Gia Tien : ";
        cin>>giaTien;
        fflush(stdin);
    }
    void XuatXemay()
    {
        XuatXe();
        cout<<"\tMau Son : \n"<<mauSon;
        cout<<"\tGia Tien : \n"<<giaTien;
    }
    int getGiatien()
    {
        return giaTien;
    }

};

int n;
Xemay *xm;

void Input_Car()
{
    cout<<"Nhap so luong xe : ";
    cin>>n;
    xm = new Xemay[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Xe "<<i+1<<" : ";
        xm[i].NhapXemay();
    }

}
void Output_Car()
{
    for(int i=0;i<n;i++)
    {
        xm[i].XuatXemay();
    }
}
void TongTien_xe_red()
{
    cout<<endl;
    //char red [] = "red";
    cout<<" DS Xe may mau do la : ";
    for(int i=0;i<n;i++)
    {
        //char mauXe [] = xm[i].mauSon;
        //if(!strstr(mauXe,red))
        if(xm[i].mauSon!="red")
        {
            /// Khong co xe mau do
            cout <<endl<<"Khong co xe mau do"<<endl;
        }
        else{
            xm[i].XuatXemay();
        }
    }
}

int main()
{
    cout << "Coding by Manh Quang" << endl;
    Input_Car();
    Output_Car();
    return 0;
}













