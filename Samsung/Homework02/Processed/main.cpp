#include <iostream>
#include <algorithm>
using namespace std;


void InputArrays(int a[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

void OutputArrays(int a[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
/**
    int index1 = (lower_bound(a,a+n,x) - a);
    cout<<index1<<" : "<<a[index1]<<endl;
    int index2 = (upper_bound(a,a+n,x) - a);
    cout<<index2<<" : "<<a[index2]<<endl;
    11 4 2
	2 2 0 7 3 2 2 4 9 1 4
	2 3 1
*/
int Countkid(int a[], int n , int t , int c)
{
    int countKid = 0;
    int couti = 0;
    for(int i=0;i<n;i++)
    {
       if(a[i] <= 4)
       {
           couti++;
       }
       else{
         countKid += couti - 1;
         couti = 0;
       }
    }
    if(couti != 0)
        countKid += couti - 1;
    return countKid;
}
int main()
{

    int n , t,c;
    int a[100];
    cin>>n;
    cin>>t;
    cin>>c;
    InputArrays(a,n);
    //OutputArrays(a,n);
    cout<<Countkid(a,n,t,c);
    return 0;
}
