#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#define Max 1234
using namespace std;

void InputArrays(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
bool ResultGame(int a[] , int n)
{
    sort(a,a+n);
    if(a[n] == a[n+1])
    {
        return false;
    }
    return true;
}

int main()
{
    int a[Max] , n;
    cin>>n;
    InputArrays(a,2*n);
    if(ResultGame(a,2*n))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
