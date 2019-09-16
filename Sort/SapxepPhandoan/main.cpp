#include <bits/stdc++.h>

using namespace std;
int n,a[100];
void Input()
{
    freopen("Data.txt","r",stdin);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void Output()
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
void SapxepPhandoan(int a[100],int dau , int cuoi)
{
    if(dau<cuoi)
    {
        int i = dau;
        int j = cuoi;
        int tam = (dau+cuoi)/2;
        while(i<=j)
        {
            while(a[i]<a[tam])i++;
            while(a[j]>a[tam])j--;
            if(i<=j)
            {
                swap(a[i],a[j]);
                Output();
                i++;
                j--;
            }
        }
    SapxepPhandoan(a,dau,j);
    SapxepPhandoan(a,i,cuoi);
    }
}
int main()
{
    cout << "\t THUAT TOAN SAP XEP PHAN DOAN " << endl;
    /*
        Chọn 1 PT làm chốt sau đó so sánh các PT ở 2 bên
        với 1 PT trung tâm nếu thoả mãn điều kiện thì đổi
        chỗ .
        Đây là phương pháp cải tiến từ PP Sắp xếp đổi chỗ ?
    */
    Input();
    Output();
    SapxepPhandoan(a,0,n-1);
    Output();
    return 0;
}
