#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Input(int *a,int n)
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"A "<<i<<" = ";
        cin>>a[i];
    }
}
void Output(int *a,int n)
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
}
long Tichvohuong(int *x,int *y,int n)
{
    long sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum + x[i]*y[i];
    }
    return sum;
}
void Bai1()
{
    int x[10],y[10],n;
    cout<<"Kich thuoc vector : ";
    cin>>n;
    cout<<"Nhap lan luot cac toa do x"<<endl;
    Input(x,n);
    cout<<"Nhap lan luot cac toa do x"<<endl;
    Input(y,n);
    int sum = Tichvohuong(x,y,n);
    cout<<"sum = "<<sum<<endl;
}
void Bai2()
{
    int a[30],b[30],c[60];
    int x,y;
    freopen("data.txt","r",stdin);
    cin>>x; // do dai mang A
    cin>>y; // do dai mang C
    Input(a,x);
    Input(b,y);
    int i = 0, j = 0,k = 0;
    while(i<x && j < y)
    {
        if(a[i]<b[j])
        {
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while(i<x)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while(j<y)
    {
        c[k] = a[j];
        j++;
        k++;
    }
    Output(c,(x+y));
}
void SelectSoft(int *a,int n)
{
     cout<<endl;
    int ma;
    for(int i=0;i<n-1;i++)
    {
        ma = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[ma])
            {
                ma = j;
            }
        }
        if(ma!=i)
        {
            swap(a[i],a[ma]);
            Output(a,n);
        }
    }
}
void BubbleSoft(int *a,int n)
{

     cout<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[j]<a[j+1])
            {
                swap(a[j],a[j-1]);
                Output(a,n);
            }
        }
    }
}
void InsertionSoft(int *a,int n)
{
    cout<<endl;
    int t,j;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        t=a[i];
        while (t<a[j]&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
        Output(a,n);
    }
}
void Bai3()
{
    int a[30],n;
    int chon;
    cout<<"Nhap N = ";
    cin>>n;
    cout<<"Nhap vao mang : "<<endl;
    Input(a,n);
    do{
        cout<<"0/ Exit"<<endl;
        cout<<"1/ InsertionSoft"<<endl;
        cout<<"2/ BubbleSoft"<<endl;
        cout<<"3/ SelectSoft"<<endl;
        cout<<"Nhap : ";
        cin>>chon;
        switch(chon)
        {
            case 0:
                break;
            case 1:
                InsertionSoft(a,n);
                Output(a,n);
                chon = true;
                break;
            case 2:
                BubbleSoft(a,n);
                Output(a,n);
                chon = true;
                break;
            case 3:
                SelectSoft(a,n);
                Output(a,n);
                chon = true;
                break;
            default :
            cout<<"Nhap sai , nhap lai"<<endl;
        }

    }while(chon!=true);
    cout<<endl;
}
int TongChan(int *a,int n)
{
    int sum =0;
   for(int i=0;i<n;i++)
   {
       if(a[i]%2==0)
        {
            sum = sum + a[i];
        }
   }
   return sum;
}
int TongLe(int *a,int n)
{
    int sum =0;
   for(int i=0;i<n;i++)
   {
       if(a[i]%2!=0)
        {
            sum = sum + a[i];
        }
   }
   return sum;
}
int TongChiahet3(int *a,int n)
{
    int sum =0;
   for(int i=0;i<n;i++)
   {
       if(a[i]%3==0)
        {
            sum = sum + a[i];
        }
   }
   return sum;
}
void Bai4()
{
    cout<<endl;
    int a[30],n;
    int chon;
    cout<<"Nhap N = ";
    cin>>n;
    cout<<"Nhap vao mang : "<<endl;
    Input(a,n);
    Output(a,n);
    cout<<"Tong so chan : "<<TongChan(a,n)<<endl;
    cout<<"Tong so le : "<<TongLe(a,n)<<endl;
    cout<<"Tong so chia het cho 3 : "<<TongChiahet3(a,n)<<endl;
}
void Menu()
{
    cout<<endl;
    int chon;
    do{
    cout<<"0/ Exit"<<endl;
    cout<<"1/ Tinh tich vo huong"<<endl;
    cout<<"2/ Tron 2 day thanh 1 day xap tang"<<endl;
    cout<<"3/ Sap xep mang tang dan"<<endl;
    cout<<"4/ Ting Tong "<<endl;
    cout<<"Nhap : ";
    cin>>chon;
    switch(chon)
    {
        case 0:
            break;
        case 1:
            //code
            Bai1();
            break;
        case 2:
            //code
            Bai2();
            break;
        case 3:
            //code
            Bai3();
            break;
        case 4:
            //code
            Bai4();
            break;
       default :
            cout<<"Nhap sai , nhap lai"<<endl;
          //  break;
    }
    }while(chon!=0);
}

int main()
{
    cout << "Hello world!" << endl;
    Menu();

    return 0;
}
