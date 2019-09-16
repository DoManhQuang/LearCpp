#include <iostream>

using namespace std;
void Array_Sort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
                swap(a[j],a[i]);
        }
    }

}
void input_array(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"   ";
    }
}
int main()
{
    int *a;
    int n;
    cout<<"n = ";
    cin>>n;
    a = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    Array_Sort(a,n);
    cout<<endl;
    cout<<"mang sau khi sap : ";
    input_array(a,n);
    int *b;
    b = new int[3];
    cout<<endl;
    int i=0;
    int d=0;
    int j=1;
    int k=2;
    cout<<"cac canh cua tam giac :\n";
    do
    {
        if((a[i]+a[j]-a[k] > 0)&&(a[i]-a[j]+a[k] > 0)&&(-a[i]+a[j]+a[k] > 0)) /// true
        {
            if(d==0)
            {
                b[0] = a[i];
                b[1] = a[j];
                b[2] = a[k];
                d++;
                cout<<b[0] << " "<<b[1]<< " "<<b[2]<<endl;
            }
            else
            {
                if(a[i] != b[0] || a[j] != b[1]  || a[k] != b[2])
                {
                    b[0] = a[i];
                    b[1] = a[j];
                    b[2] = a[k];
                    d++;
                    cout<<b[0] << " "<<b[1]<< " "<<b[2]<<endl;
                }
            }
        }
        if(k==n-1)
        {
            if(j==n-2)
            {
                i++;
                j=i+1;
                k=j+1;
            }
            else
            {
                j++;
                k=j+1;
            }
        }
        else
        {
            k++;
        }
    }
    while(i<=n-3);
    cout<<"\nso tam giac la : "<<d<<endl;
    return 0;
}
