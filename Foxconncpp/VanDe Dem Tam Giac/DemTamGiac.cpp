#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define Max 12345
using namespace std;

void InputArrays(long int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}
void OutputArrays(long int a[],int n)
{
    cout<<endl;
    for(int i=0; i<n-1; i++)
    {
        cout<<a[i]<<setw(5);
    }
    cout<<a[n-1];
}
bool Checktriangle(long int a,long int b,long int c)
{
    if(a+b > c && a+c>b && b+c > a)
        return true;
    return false;
}
bool Processing(long int a[],int n)
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
int CountTriangle(long int a[],int n)
{
    cout<<endl;
    int countTri = 0;
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
            if (Checktriangle(a[i],a[j],a[z]))
            {
                countTri++;
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
    long int a[Max] ;
    int n;
    //freopen("data.txt","r",stdin);
    cin>>n;
    InputArrays(a,n);
    OutputArrays(a,n);
    sort(a,a+n);
    int countTri = CountTriangle(a,n);
    cout<<countTri<<endl;
    /**
    if(Processing(a,n))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }*/
    return 0;
}
