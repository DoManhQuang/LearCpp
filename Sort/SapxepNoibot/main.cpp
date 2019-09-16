#include <bits/stdc++.h>

using namespace std;
float n,a[100];
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
void Sapxepnoibot()
{
    for(int i=0;i<n-1;i++)
    {
        cout<<i<<endl;
        for(int j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
                Output();
            }
        }
    }
}
int main()
{
    cout << " THUAT TOAN SAP XEP NOI BOT" << endl;
/*
    Trong các lần duyệt sẽ đổi chỗ 2 phần tử cạnh nhau theo
    thứ tự đúng !
*/
    Input();
    Output();
    Sapxepnoibot();
    Output();
    return 0;
}
