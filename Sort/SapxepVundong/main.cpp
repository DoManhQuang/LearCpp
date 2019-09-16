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
void Hoanvi(int a[100],int k,int r)
{
    if(k <= r/2-1)
    {
        int j = 2*k+1;
        if(j+1<r && a[j]<a[j+1])
            j = j+1;
        if(a[k]<a[j])
        {
            swap(a[j],a[k]);
            Hoanvi(a,j,r);
        }
    }
}
void TaoDongdautien(int a[100],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        Hoanvi(a,i,n);
    }
}
void SapxepVundong()
{
    TaoDongdautien(a,n);
    for(int i=n-2;i>=2;i--)
    {
        swap(a[0],a[i]);
        Output();
        Hoanvi(a,0,i-1);
    }
}
int main()
{
    cout << "\t THUAT TOAN SAP XEP VUN DONG " << endl;

    Input();
    Output();
    SapxepVundong();
    Output();

    return 0;
}
