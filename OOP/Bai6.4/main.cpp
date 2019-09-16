#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class MaTran
{
  private:
        double a[10][10];
        int m, n;
public:
    MaTran()
    {
        m = n = 0;
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                a[i][j] = 0;
            }
        }
    }
    MaTran operator + (MaTran mt);
    MaTran operator - (MaTran mt);
    MaTran operator -();
    friend istream& operator >> (istream &is, MaTran &mt);
    friend ostream& operator << (ostream &os, MaTran mt);
};
istream& operator >> (istream &is, MaTran &mt)// truyền vào cin
{
    cout <<"\nNhap so luong cot, hang: ";
    is >> mt.m>>mt.n;
    for(int i = 0; i < mt.m; i++)
    {
        for(int j = 0; j < mt.n; j++)
        {
            cout <<"PT ["<<i+1<<","<<j +1<<"]= ";
            is >> mt.a[i][j];
        }
    }
    return is;// trả về cin
}

ostream& operator << (ostream &os, MaTran mt)
{
    for(int i = 0; i < mt.m; i++)
    {
        for(int j = 0; j < mt.n; j++)
        {
            os << setw(6)<<mt.a[i][j];
        }
        os << endl;
    }
    return os;
}


MaTran MaTran::operator + (MaTran mt)
{
    MaTran temp;
    temp.m = mt.m;
    temp.n = mt.n;
    for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
    {
        temp.a[i][j] =a[i][j] + mt.a[i][j];
    }
    return temp;
}

MaTran MaTran::operator - (MaTran mt)
{
    for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
    {
        a[i][j] -= mt.a[i][j];
    }

}

MaTran MaTran::operator - ()
{
    for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
    {
        a[i][j] -= a[i][j];
    }
}

int main()
{
    MaTran mt1, mt2;
    //cout << mt1;
    cin >> mt1;
    cin >> mt2;
    cout << "\nma tran 1 + ma tran 2: "<<mt1+mt2;
    return 0;
}
