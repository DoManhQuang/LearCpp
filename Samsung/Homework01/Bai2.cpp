#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

int IndexString(string s1 , string s2)
{
    int len = s1.length();
    cout<<s1[0];
    for(int i=1; i<len ; i++)
    {
        if(s1[i] > s2[0])
        {
            //return i;
            cout<<s1[i];
        }
        else
        {
            cout<<s1[i];
            cout<<s2[0];
            break;
        }
    }
    //return len;
    return 0;
}
/*
void Account(string s1 , string s2)
{
    int index = IndexString(s1,s2);
    for(int i=0;i<index;i++)
    {
        cout<<s1[i];
    }
    cout<<s2[0];
}
*/
int main()
{
   string Name1;
   string Name2;
   cin>>Name1;
   cin>>Name2;
   //Account(Name1,Name2);
   IndexString(Name1,Name2);
   return 0;
}
