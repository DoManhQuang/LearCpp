#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Arrays
{
private :
    int* arr;
    int n;
public :
    Arrays()
    {
        n = 0;
        arr = new int [n];
        for(int i=0;i<n;i++)
        {
            arr[i]=0;
        }
    }
    Arrays operator ++();
    Arrays operator --();
    friend istream& operator >> (istream &is , Arrays &a);
    friend ostream& operator << (ostream &os , Arrays a);
};

istream& operator >> (istream &is , Arrays &a)
{
    is >> a.n;
    a.arr = new int [a.n];
    for(int i=0;i<a.n;i++)
    {
        is >> a.arr[i];
    }
    return is;
}
ostream& operator << (ostream &os , Arrays a)
{
    os<<endl;
    for(int i=0;i<a.n;i++)
    {
        os <<"\t"<< a.arr[i];
    }
    return os;
}
Arrays Arrays::operator -- ()
{
    Arrays arr = *this; /// khởi tạo đối tượng Arrays arr gán = đối tượng được gọi phương thức.
    for(int i=0;i<n-1;i++)
    {
        int ma = i;
        for(int j = i+1 ; j<n;j++)
        {
            if(arr.arr[j]>arr.arr[ma])
            {
                ma = j;
            }
        }
        if(ma != i)
        {
            swap(arr.arr[ma],arr.arr[i]);
        }
    }
    return arr;
}
Arrays Arrays::operator ++ ()
{
    Arrays arr = *this; /// khởi tạo đối tượng Arrays arr gán = đối tượng được gọi phương thức.
    for(int i=0;i<n-1;i++)
    {
        int mi = i;
        for(int j = i+1 ; j<n;j++)
        {
            if(arr.arr[j]<arr.arr[mi])
            {
                mi = j;
            }
        }
        if(mi != i)
        {
            swap(arr.arr[mi],arr.arr[i]);
        }
    }
    return arr;
}
int main()
{
    cout << "Hello world!" << endl;
    Arrays arr1;
    cin>>arr1;
    cout<<arr1<<endl;
    cout<<--arr1<<endl;
    cout<<++arr1<<endl;

    return 0;
}
