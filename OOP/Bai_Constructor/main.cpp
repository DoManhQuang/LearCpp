#include <iostream>

using namespace std;
class PhanSO
{
private:
    int tuSo, mauSO;
public:
    PhanSO()
    {
        tuSo = 0;
        mauSO = 1;
    }
    PhanSO(int tuSo, int mauSO)
    {
        this->tuSo = tuSo;
        this->mauSO = mauSO;
    }
    void Xuat()
    {
        cout<<tuSo<<"/"<<mauSO<<endl;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    PhanSO p1;
    PhanSO p2(2,3);
    p1.Xuat();
    p2.Xuat();
    return 0;
}
