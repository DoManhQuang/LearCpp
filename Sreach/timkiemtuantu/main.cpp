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
void Timkiemtuantu()
{
    cout<<endl;
    int i=0;
    while(i<n&&a[i]!=x)i++;
    if(i==n)
        cout<<"Khong tim thay "<<x<<endl;
    else{
        cout<<"Tim thay "<<x<<endl;
    }
}
int main ()
{
    Input();
    Output();
    Timkiemtuantu();

    return 0;
}
