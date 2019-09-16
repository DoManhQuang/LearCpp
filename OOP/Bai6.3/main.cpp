#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class DaThuc
{
    private :
        float a , b ,c ;
    public :
        DaThuc()
        {
            a = 0;
            b = 0;
            c = 0;
        }
        DaThuc(float a1, float b1 , float c1)
        {
            a = a1;
            b = b1;
            c = c1;
        }
        float getA();
        float getB();
        float getC();
        void setA(float a1);
        void setB(float b1);
        void setC(float c1);
        DaThuc operator + (DaThuc dt);
        DaThuc operator - (DaThuc dt);
        DaThuc operator - ()
        {
            return DaThuc(-a,-b,-c);
        }
        friend istream& operator >> (istream &abc , DaThuc &dt);
        friend ostream& operator << (ostream &abc , DaThuc dt);
};
istream& operator >> (istream &abc , DaThuc &dt)
{
    abc >> dt.a;
    abc >> dt.b;
    abc >> dt.c;
    return abc;
}
ostream& operator << (ostream &abc,DaThuc dt)
{
    cout<<endl;
    abc << dt.a <<" X^2 + " <<dt.b<< " X + "<<dt.c<<endl;
    return abc;
}
DaThuc DaThuc::operator+(DaThuc dt)
{
    float a2 = a + dt.a;
    float b2 = b + dt.b;
    float c2 = c + dt.c;
    return DaThuc(a2,b2,c2);
}
DaThuc DaThuc::operator-(DaThuc dt)
{
    float a2 = a - dt.a;
    float b2 = b - dt.b;
    float c2 = c - dt.c;
    return DaThuc(a2,b2,c2);
}

int main()
{
    cout << "Hello world!" << endl;
    DaThuc dt1 , dt2;
    cin>>dt1;
    cin>>dt2;
    cout<<-dt1<<endl; //Đảo chiều đa thức
    cout<<dt1+dt2<<endl; // Cộng Đa Thức
    cout<<dt1-dt2<<endl; // Trừ Đa Thức
    return 0;
}
