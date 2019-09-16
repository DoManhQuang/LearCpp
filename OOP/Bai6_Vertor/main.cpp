#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float sum=0;
    for(int i=1;i<=n;i++)
    {
        cout<<"May "<<i<<" : ";
        sum = sum + (1.8+0.5*(i-1));
        cout<<(1.8+0.5*(i-1))<<" m "<<endl;
    }
    cout<<"Day 1 : "<<sum<<endl<<endl;
    float sum1=0;
    for(int i=1;i<=n;i++)
    {
        cout<<"May "<<i<<" : ";
        sum1 = sum1 + (3.2+0.5*(i-1));
        cout<<(3.2+0.5*(i-1))<<" m "<<endl;
    }
    cout<<"Day 2 : "<<sum1<<" m "<<endl<<endl;
    float sum2=0;
    for(int i=1;i<=n;i++)
    {
        cout<<"May "<<i<<" : ";
        sum2 = sum2 + (5.7+0.5*(i-1));
        cout<<(5.7+0.5*(i-1))<<" m "<<endl;
    }
    cout<<"Day 3 : "<<sum2<<" m "<<endl<<endl;

    cout<<endl<<" Sum 1 , 2 ,3 : "<<sum+sum1+sum2<<" m "<<endl;
    return 0;
}
