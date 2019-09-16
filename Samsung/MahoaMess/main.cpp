#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /**
        quang
        12345
        quang
        12345
    */
    cout << "Hello world!" << endl;
    string s = "quang54321quang54321";
    string str[5];
    int n = 5;
    int vt = 0;
    for(int i=0;i<s.length();i++)
    {
        if(i<n)
        {
            str[vt] += s[i];
        }
        else if(i<n*2)
        {
            vt = 1;
            str[vt] += s[i];
        }
        else if(i<n*3)
        {
            vt = 2;
            str[vt] += s[i];
        }
        else{
            vt = 3;
            str[vt] += s[i];
        }
    }
    cout<<"str 0 :"<<str[0]<<endl;
    cout<<"str 1 :"<<str[1]<<endl;
    cout<<"str 2 :"<<str[2]<<endl;
    cout<<"str 3 :"<<str[3]<<endl;
    return 0;
}
