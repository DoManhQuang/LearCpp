#include <bits/stdc++.h>

using namespace std;
int n,a[100];

void Input ()
{
    freopen("Data.txt","r",stdin);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void Output()
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
/*void Timmax()
{
    int ma = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>ma)
        {
            ma = a[i];
        }
    }
    cout<<ma<<endl;
}*/
void Xapxepluachon()
{
   for(int i=0;i<n-1;i++)
   {
       int ma = i; /// Giả sử vị trí max là vị trí thứ i
       for(int j = i+1 ; j<n;j++)
       {
           if(a[j]>a[ma])
           {
               ma = j; /// Kiểm tra và tìm phần tử max
           }
       }
       if(ma != i)
       {
           swap(a[i],a[ma]); /// Đổi chỗ sau khi đã tìm được PT max
           Output();
       }
   }
}

/*
	i = 0	2	5	6	9	3	swap(9,2)
	i = 1	9	5	6	2	3
	i = 2	9	6	5	2	3
	i = 3	9	6	5	2	3
	i = 4	9	6	5	3	2
			9	6	5	3	2
*/
int main()
{
    cout << "\t THUAT TOAN XAP XEP LUA CHON - SELECTION SOFT " << endl;
    /*
        Tư tưởng thuật toán là duyệt các phần từ và chọn phần tử lớn xếp
        lên đầu sau đó khóa lại duyệt các phần tử còn lại rồi làm
        tương tự .
    */

    ///B1 : Duyệt mảng tìm phần tử lớn nhất
    ///B2 : Đổi chỗ đưa lên đầu
    /// Tương tự
    Input();
    Output();
    Xapxepluachon();
    Output();
    return 0;
}








