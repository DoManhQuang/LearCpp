#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define Max 123456
using namespace std;
void InputArrays(long long a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}
void OutputArrays(long long a[],int n)
{
    cout<<endl;
    for(int i=0; i<n-1; i++)
    {
        cout<<a[i]<<setw(5);
    }
    cout<<a[n-1];
}
bool Checktriangle(long long a,long long b,long long c)
{
    if(a+b > c && a+c>b && b+c > a)
        return true;
    return false;
}
bool Processing(long long a[],int n)
{
    for(int i=0; i<n-3; i++)
    {
        if(Checktriangle(a[i],a[i+1],a[i+2]))
        {
            return true;
        }
    }
    return false;
}
bool UniqueTriangle(long long b[], int indexn, long long a, long long z, long long c)
{
    for(int i=0;i<indexn-2;)
    {
        if(a == b[i] && z == b[i+1] && c == b[i+2])
        {
            return true;
        }
        i += 3;
    }
    return false;
}
int CountTriangle(long long a[],int n, long long b[])
{
    cout<<endl;
    int countTri = 0;
    int indexb = 0;
    int i = 0;
    while(i!=n)
    {
        int j = i + 1;
        int z = j + 1;
        while(j!=n)
        {
            if(z == n){
                j++;
                z = j + 1;
            }
            if (Checktriangle(a[i],a[j],a[z]) && !UniqueTriangle(b,indexb,a[i],a[j],a[z]))
            {
                countTri++;
                b[indexb] = a[i];
                b[indexb+1] = a[j];
                b[indexb+2] = a[z];
                indexb += 3;
                cout<<a[i]<<setw(5)<<a[j]<<setw(5)<<a[z]<<endl;
            }
            else
            {
                z = n-1;
            }
            z++;
        }
        i++;
    }
    return countTri;
}
int main()
{
    long long a[Max] ;
    long long b[Max];
    int n;
    freopen("data.txt","r",stdin);
    cin>>n;
    InputArrays(a,n);
    OutputArrays(a,n);
    sort(a,a+n);
    int countTri = CountTriangle(a,n,b);
    cout<<countTri<<endl;
    return 0;
}
