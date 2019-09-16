#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/**
Bài tập 2: Cài đặt lớp Array với các thuộc tính n (int) và a (int*) để lưu trữ 1 mảng n số nguyên
và các phương thức sau:
- Phương thức khởi tạo không đối khởi tạo n = 0 và a = NULL.
- Phương thức nhập: nhập n, cấp phát bộ nhớ cho a và nhập các phần tử của mảng.
- Phương thức toán tử tăng (++) để cộng thêm vào mỗi phần tử mảng một số nguyên là số chẵn
nhỏ nhất trong mảng (nếu mảng không có số chẵn thì cộng thêm 2).
- Phương thức toán tử cộng (+) để cộng hai mảng cùng kích thước (cộng các phần tử tương ứng
của hai mảng), nếu hai mảng không cùng kích thước trả về n = 0 và a = NULL.
- Phương thức toán tử giảm (--) để sắp mảng theo chiều giảm dần.
- Hàm toán tử nhập để nhập n, cấp phát bộ nhớ cho a và nhập mảng n phần tử.
- Hàm toán tử xuất: hiển thị mảng ra màn hình.
Viết hàm main sử dụng lớp Array vừa cài đặt (sinh viên sử dụng tất cả các phương thức đã định
nghĩa trong lớp).
*/
class Arrays
{
private:
    int *arr;
    int n;
public:
    Arrays()
    {
        this->n = 0;
        this->arr = NULL;
    }
    Arrays(int n)
    {
        this->n = n;
        arr = new int [n];
        for(int i=0;i<n;i++)
        {
            arr[i]=0;
        }
    }
    ~Arrays()
    {
        delete []arr;
        this->n = 0;
    }
    void NhapArr();
    Arrays operator ++ ();
    Arrays operator + (Arrays arr);
    Arrays operator -- ();
    friend istream &operator >> (istream &is, Arrays &arr);
    friend ostream &operator << (ostream &os, Arrays arr);
};
void Arrays::NhapArr()
{
    cout<<"Nhap N = ";
    cin>>n;
    arr = new int [n];
    for(int i=0;i<n;i++)
    {
        cout<<" A ["<<i<<"] = ";
        cin>>arr[i];
    }
}
Arrays Arrays :: operator ++ ()
{
    int vt = 0;
    while(vt<n && arr[vt]%2!=0)vt++;
    if(vt==n)
    {
        for(int i=0;i<n;i++)
        {
            this->arr[i] = arr[i] + 2;
        }
    }
    else{
        int mi = vt;
        for(int j=vt+1;j<n;j++)
        {
            if(arr[j]<arr[mi])
            {
                mi = j;
            }
        }
        for(int i=0;i<n;i++)
        {
            this->arr[i] = arr[i] + arr[mi];
        }
    }
    return *this;
}
Arrays  Arrays :: operator + (Arrays arr)
{
    if(this->n != arr.n)
    {
        arr1.n= 0;
        arr1.arr = NULL;
    }
    else{
        for(int i=0;i<n;i++)
        {
            arr1.arr[i] = this->arr[i] + arr.arr[i];
        }
    }
    return *this;
}
Arrays Arrays :: operator -- ()
{
    for(int i=0;i<n;i++)
    {
        for(int j = n-1;j>=i;j--)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return *this;
}
istream &operator >> (istream &is, Arrays &arr)
{
    cout<<"Nhap N = ";
    is>>arr.n;
    arr.arr = new int [arr.n];
    for(int i=0;i<arr.n;i++)
    {
        cout<<" A ["<<i<<"] = ";
        is>>arr.arr[i];
    }
    return is;
}
ostream &operator << (ostream &os, Arrays arr)
{
    for(int i=0;i<arr.n;i++)
    {
        os<<"\t A ["<<i<<"] = "<<arr.arr[i];
    }
    return os;
}
int main()
{
    cout << "Coding by Manh Quang" << endl;
    Arrays arr1(5) ,arr2 , arr3, arr4;
    cout<<" Arr 1 : "<<arr1<<endl;
    cout<<"Nhap Arr2 : "<<endl;
    //freopen("data2.txt","r",stdin);
    cin>>arr2;
    //fclose(stdin);
    cout<<endl<<" Arr 2 : "<<arr2<<endl;
    cout<<"Nhap Arr3 : "<<endl;
    cin>>arr3;
    //cout<<" Arr 3 : "<<arr3<<endl;
    ///cout<<" ++ Arr2 : "<<++arr2<<endl; /// Chưa ổn
    arr4 = arr3 + arr2;
    cout<<" Arr 3 = Arr1 + Arr2 "<<endl<<arr4<<endl;
    return 0;
}



















