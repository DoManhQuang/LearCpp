#include <iostream>
#include <algorithm>
#define Max 12345
using namespace std;

void InputArrays(long int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

bool Checktriangle(long int a,long int b ,long int c)
{
    if(a+b > c && a+c>b && b+c > a)
        return true;
    return false;
}
bool Processing(long int a[],int n)
{
   for(int i=0;i<n-3;i++)
   {
       if(Checktriangle(a[i],a[i+1],a[i+2]))
       {
           return true;
       }
   }
   return false;
}
int main()
{
    long int a[Max] ;
    int n;
    cin>>n;
    InputArrays(a,n);
    sort(a,a+n);
    if(Processing(a,n))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
