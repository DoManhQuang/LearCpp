#include <iostream>
#include <algorithm>
#define Max 12345
using namespace std;

void InputArrays(long long a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void OutputArrays(long long a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void sortArr(long long a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int x = i;
        for(int j = i + 1 ; j<n;j++)
        {
            if(a[j] < a[x] && i%2==0)
            {
                x = j;
            }
            else if(a[j] > a[x] &&i%2 !=0)
            {
                x = j;
            }
        }
        if(x!=i)
        {
            swap(a[i],a[x]);
        }
    }
}
void Sapxepnoibot(long long a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1] && i%2 == 0)
            {
                swap(a[j],a[j-1]);
            }
            else if(a[j]>a[j-1] && i%2 != 0)
            {
                swap(a[j],a[j-1]);
            }
        }
    }
}
int main()
{
    long long a[Max] ;
    int n;
    cin>>n;
    InputArrays(a,n);
    sortArr(a,n);
    //Sapxepnoibot(a,n);
    return 0;
}
