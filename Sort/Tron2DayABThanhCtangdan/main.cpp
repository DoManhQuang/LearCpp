#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int a[20] = {1, 5, 6, 8, 9, 2};
int b[20] = {10, 15, 60, 18, 91, 20};
int c[40];
int m = 6, n = 6, p = m+n;

int minarrrays(int x[], int len)
{

    int mi = -1;
    for(int i=0;i<len;i++)
    {
        if(a[i] != -1)
        {
            mi = i;
            break;
        }
    }
    if(mi == -1)
    {
        return mi;
    }
    for(int i=0;i<len;i++)
    {
        if(x[i]<x[mi] && x[i] != -1)
        {
            mi = i;
        }
    }
    return mi;
}
void output()
{
    cout<<endl;
    for(int i=0;i<p;i++)
    {
        cout<<setw(4)<<c[i];
    }
}
void sortABtoC()
{
    int z=0;
    while(z != p)
    {
       int minA = minarrrays(a, m);
       int minB = minarrrays(b, n);
       cout<<endl<<setw(4)<<"->"<<minA<<"\t->"<<minB;
/*
       if(minA == -1)
       {
           c[z] = b[minB];
           b[minB] = -1;
       }
       else if (minB == -1)
       {
           c[z] = a[minA];
           a[minA] = -1;
       }
       else
       {
       */
           if(a[minA] < b[minB])
           {
               c[z] = a[minA];
               a[minA] = -1;
           }
           else
           {
               c[z] = b[minB];
               b[minB] = -1;
           }
       //}
       output();
       z+=1;
    }
}

/**
    i  -> m                     j -> n
    1   5   6   8   9   2       10  15  60  18  91  20

    z -> p
    1   2   5   6   8   9   10  15  18  20  60  91

*/

int main()
{
    cout << "Hello world!" << endl;
    sortABtoC();
    output();
    return 0;
}
