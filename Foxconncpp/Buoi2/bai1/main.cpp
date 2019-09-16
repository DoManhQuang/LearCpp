#include<bits/stdc++.h>

using namespace std;

void Bai1()
{
    cout<<endl;
    /// kiem tra chan le
    int n;
    cout<<"Nhap N = ";
    cin>>n;
    if(n%2==0)
        cout<<"So Chan "<<endl;
    else
        cout<<"So Le "<<endl;

}
void Bai2()
{
     cout<<endl;
    /// pt bac 1
    float a,b,x;
     cout<<"Nhap A = ";
    cin>>a;
     cout<<"Nhap B = ";
    cin>>b;
    if(a==0)
        cout<<"PT vo No"<<endl;
    else if(b==0)
        cout<<"PT vo so No"<<endl;
    else
    {
        x = -b/a;
        cout<<"X = "<<x<<endl;
    }
}
void Bai3()
{
    cout<<endl;
    ///pt bac 2
    float a,b,c,x1,x2,deta;
     cout<<"Nhap A = ";
    cin>>a;
     cout<<"Nhap B = ";
    cin>>b;
     cout<<"Nhap C = ";
    cin>>c;
    deta = b*b - 4*a*c;
    if(deta<0)
        cout<<"PT vo No"<<endl;
    else if(deta == 0)
    {
        x1 = -b/2*a;
        cout<<"PT co 1 No :" <<x1<<endl;
    }
    else
    {
        x1 = (-b + sqrt(deta))/2*a;
        x2 = (-b - sqrt(deta))/2*a;
        cout<<"PT co No X1 = :" <<x1<<endl;
        cout<<"PT co No X2 = :" <<x2<<endl;
    }
}
void Bai4()
{
    cout<<endl;
    int tien;
    cout <<"Nhap vao so tien :";
    cin>>tien;
    if (tien<200000)
        cout<<"So tien phai tra "<<tien<<endl;
    else if(tien<300000)
        cout<<"So tien phai tra "<<(tien - tien*0.2);
    else
        cout<<"So tien phai tra "<<(tien - tien*0.3);
}
void Bai5()
{
    int tienDS,tienLuong;
    cout <<"Nhap vao so tien DS :";
    cin>>tienDS;
    cout <<"Nhap vao so tien luong :";
    cin>>tienLuong;

    if (tienDS < 50000000)
        cout<<"So tien luong : "<<(tienLuong - 0.1*tienLuong)<<endl;
    else if(tienDS <= 100000000)
        cout<<"So tien luong : "<<tienLuong<<endl;
    else if(tienDS <= 150000000)
        cout<<"So tien luong : "<<(tienLuong + tienLuong*0.05)<<endl;
    else
        cout<<"So tien luong : "<<(tienLuong + tienLuong*0.1)<<endl;
}
void Bai6()
{
    cout<<endl;
    float diem;
    cout<<"Nhap so diem TB : "<<endl;
    cin>>diem;
    if(diem < 5.00)
        cout<<"HS yeu"<<endl;
    else if(diem < 7.00)
        cout<<"HS TB"<<endl;
    else if(diem < 8.00)
        cout<<"HS Kha"<<endl;
    else
        cout<<"HS Gioi"<<endl;
}
void Menu()
{
    int choice;
    do
    {
    cout<<" 1/ Bai 1"<<endl;
    cout<<" 2/ Bai 2"<<endl;
    cout<<" 3/ Bai 3"<<endl;
    cout<<" 4/ Bai 4"<<endl;
    cout<<" 5/ Bai 5"<<endl;
    cout<<" 6/ Bai 6"<<endl;
    cout<<" 7/ Exit "<<endl;
    cout<<" Chon 1 yeu cau: "<<endl;
    cin>>choice;
        switch(choice)
        {
            case 1:
                Bai1();
                break;
            case 2:
                Bai2();
                break;
            case 3:
                Bai3();
                break;
            case 4:
                Bai4();
                break;
            case 5:
                Bai5();
                break;
            case 6:
                Bai6();
                break;
            case 7:
                exit(0);
            default :
                cout<<"Nhap sai , nhap lai "<<endl;
                break;
        }

    }while(choice != 7);
}

int main()
{
    Menu();
    return 0;
}
