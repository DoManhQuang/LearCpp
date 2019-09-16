#include<bits/stdc++.h>

using namespace std;

void Bai1()
{
    cout<<endl;
    int n;
    long long sum = 1;
    do{
        cout<<"N > 10 , N = "<<endl;
        cin>>n;
    }while(n<=10);
    for(int i = 2- n%2;i<=n;i+=2 )
    {
        sum = sum +i;
    }
    cout<<"sum = "<<endl;
}
/*void Bai2()
{
    cout<<endl;
    int m,n,aCount = 0;
    do{
        cout<<"Nhap 2 so nguyen duong M < N"<<endl;
        cin>>m>>n;

    }while(m<1||n<1||n<=m);
    int tichMN = m*n;
    int sum = 0;

    for(int i=m;i<=n;i++){
        if(tichMN%i==0)
            cout<<i<<endl, sum = sum + i;
    }
    cout<<"Tong uoc m*n : "<<sum<<endl;
}
*/
void Bai3()
{
    cout<<endl;
    int n , countDuong=0, countAm=0;
    double sum=0;
    double x;
    cout<<" so nguyen duong N > 8 , N = "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap so thuc X"<<i<<" = "<<endl;
        cin>>x;
        if(x>0)
            countDuong++, sum = sum +x;
        else if(x<0)
            countAm++;
    }
    cout<<"so Duong = "<<(countDuong)<<endl;
    cout<<"so Am = "<<(countAm)<<endl;
    cout<<"TBC so Duong = "<<(sum/countDuong)<<endl;
}
void Bai4()
{
     cout<<endl;
    int n , sumChan=0, sumLe=0;

    cout<<" so nguyen duong N > 1000 , N = "<<endl;
    cin>>n;
    for(int i=1;i<=n/2+1;i++)
    {
        if(i%2==0&&n%i==0)
            sumChan = sumChan + i;
        else if (i%2!=0&&n%i==0)
            sumLe = sumLe + i;
    }
    cout<<" so Le = "<<(sumLe)<<endl;
    cout<<" so Chan = "<<(sumChan)<<endl;
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
              //  Bai2();
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
