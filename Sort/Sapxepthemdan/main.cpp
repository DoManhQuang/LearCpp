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
void Sapxepthemdan()
{
    for(int i=1;i<n;i++)
    {
        int t = a[i];
        int j = i-1;
        while( j>=0 && t < a[j] )
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = t;
        Output();
    }
}

int main()
{
    cout << "\t THUAT TOAN SAP XEP THEM DAN " << endl;
    /*
        Tương tưởng Là chèn phần tử vào đúng vị trí của nó ?
    */
    Input();
    Output();
    Sapxepthemdan();
    Output();

    return 0;\
}
