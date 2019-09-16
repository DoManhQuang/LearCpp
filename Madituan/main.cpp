#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int a[9][9];
int n = 8;
int rows[8] = {2,  1, -1, -2, -2,  -1,  1,  2}; // i
int cols[8] = {1,  2,  2,  1, -1,  -2, -2, -1}; // j
// int flag = 1;
int sol = 1;
void createmap()
{
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            a[i][j] = -1;
        }
    }
}

void displaymap()
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
           cout<<setw(4)<<a[i][j];
        }
        cout<<endl<<endl;
    }
}

bool checkmap(int row, int col)
{
    if (row >=0 && col >= 0 && row < n && col < n && a[row][col] == -1){
        return true;
    }
    return false;
}

void madituan(int row, int col, int flag)
{
    if(flag == n*n)
        {
            cout<<"================================================"<<endl;
            cout<<"solution "<<sol;
            displaymap();
            cout<<"================================================"<<endl;
            sol++;
        }
    else
        {
            for(int i=0; i<8; i++)
            {
                if(checkmap(row + rows[i], col + cols[i]))
                {
                    int x = row + rows[i];
                    int y = col + cols[i];
                    a[x][y] = flag;
                    madituan(x, y, flag + 1);
                    a[x][y] = -1;
                }
            }
        }
}
int main()
{
    createmap();
    displaymap();
    int flag = 1;
    int index_x = 0;
    int index_y = 0;
    a[index_x][index_y] = 0;
    madituan(index_x, index_y, flag);
    return 0;
}
