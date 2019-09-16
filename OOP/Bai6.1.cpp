#include <iostream>
#include <math.h>
using namespace std;


class PhanSo
{
private:
    float tuso, mauso;
    PhanSo gian_uoc(float tu, float mau);
    float uscln(float tu, float mau);
public:
    PhanSo()
    {
        tuso = 0;
        mauso= 1;
    }
    PhanSo(float tu, float mau)
    {
        tuso = tu;
        mauso = mau;
    }
    float gettu();
    float getmau();
    void settu(float tu);
    void setmau(float mau);
    float lay_gia_tri_phan_so()
    {
        return tuso/mauso;
    }
    PhanSo operator * (PhanSo ps);
    PhanSo operator + (PhanSo ps);
    PhanSo operator / (PhanSo ps);
    PhanSo operator - (PhanSo ps);
    PhanSo operator -()// dao dau phan so
    {
        return PhanSo(-tuso, mauso);
    }
    int operator > (PhanSo ps)
    {
        float trai = tuso/mauso;
        float phai = ps.tuso/ps.mauso;
        if(trai > phai)
            return 1;
        else
            return 0;
    }
    friend istream& operator >> (istream &abc, PhanSo &ps);
    friend ostream& operator << (ostream &os, PhanSo ps);
};

float PhanSo::uscln(float tu, float mau)
{
    // xử lý tử và mẫu truyền vào
    tu = fabs(tu);
    mau = fabs(mau);
    if(tu  * mau == 0) return 1;
    while(tu != mau)
    {
        if(tu > mau)
            tu = tu - mau;
        else
            mau = mau - tu;
    }
    return tu;
}
PhanSo PhanSo::gian_uoc(float tu, float mau)
{
    float ucln = uscln(tu, mau);
    return PhanSo(tu/ucln, mau/ucln);
}


istream& operator >> (istream &abc, PhanSo &ps)
{
	
    cout << "\nNhap tu so: ";
    abc >> ps.tuso;
    cout << "\nNhap mau so: ";
    abc >> ps.mauso;
    return abc;
}

ostream& operator << (ostream &os, PhanSo ps)
{
    os << ps.tuso<<"/"<<ps.mauso;
    return os;
}

PhanSo PhanSo::operator + (PhanSo ps)
{
   float t = tuso*ps.mauso + mauso*ps.tuso;
    float m = mauso*ps.mauso;
    return gian_uoc(t, m);
}

PhanSo PhanSo::operator - (PhanSo ps)
{
    float t = tuso*ps.mauso - mauso*ps.tuso;
    float m = mauso*ps.mauso;
    return gian_uoc(t, m);
}
PhanSo PhanSo::operator * (PhanSo ps)
{
    float t = tuso*ps.tuso;
    float m = mauso*ps.mauso;
    return gian_uoc(t, m);
}

PhanSo PhanSo::operator / (PhanSo ps)
{
    float t = tuso*ps.mauso;
    float m = mauso*ps.tuso;
    return gian_uoc(t, m);
}



int main()
{
    PhanSo ps1, ps2;
    cout << "\nNhap Phan so 1 la ";
    cin >> ps1;
    cout << "\nNhap phan so 2 la "<< endl;
    cin >> ps2;

    cout << "Phan so tong: "<<ps1 + ps2<<endl;
     cout << "Phan so hieu: "<<ps1 - ps2<<endl;
      cout << "Phan so tich: "<<ps1 * ps2<<endl;
       cout << "Phan so thuong: "<<ps1 / ps2;
    return 0;
}
