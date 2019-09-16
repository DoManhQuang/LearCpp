#include <bits/stdc++.h>

using namespace std;
int n,x,a[100];
void Input()
{
    freopen("Data.txt","r",stdin);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
}
void Output()
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
// Hàm bình thường
void Timkiem_BinhThuong()
{
    cout<<endl;
    int dau = 0; // biến đầu
    int cuoi = n-1; // biến cuối
    int tam; // biến trung tâm ;
    while (1)
    {
        tam = (dau+cuoi)/2;
        if (dau>cuoi){
            cout<<"Khong tim thay "<<x<<endl;
            break;
        }
        else if(a[tam]==x){
            cout<<"Tim thay "<<x<<endl;
            break;
        }
        else if (a[tam]>x) {
            cuoi = tam-1;
        }
        else if (a[tam]<x){
            dau = tam+1;
        }
    }
}
// Hàm đệ quy
int Timkiem_DeQuy (int x, int a[100],int dau,int cuoi)
{
    int tam;
    tam = (dau+cuoi)/2;
    if(dau>cuoi)
        return -1;
    else if(a[tam]==x)
        return tam+1;
    else if(a[tam]>x)
        return Timkiem_DeQuy(x,a,dau,tam-1);
    return Timkiem_DeQuy(x,a,tam+1,cuoi);
}
int main()
{
    cout << "\t TIM KIEM NHI PHAN " << endl;
    Input();
    Output();
    ///Timkiem_BinhThuong();

    if(Timkiem_DeQuy(x,a,0,n-1) == -1 )
        cout<<endl<<"Khong tim thay "<<x<<endl;
    else
        cout<<endl<<"Tim thay "<<x<<endl;

    return 0;
}
