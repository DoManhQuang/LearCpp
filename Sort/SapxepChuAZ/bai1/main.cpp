#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//string s = "cbomn1234vyz";
//string s1 = "";
char s[100];
char *s1;

int chuHoa(char abc)
{
    if(abc >= 'A' && abc <= 'Z')
    {
        return 1;
    }
    return 0;
}
int chuThuong(char abc)
{
    if(abc >= 'a' && abc <= 'z')
    {
        return 1;
    }
    return 0;
}
void chuoimoichar()
{
    gets(s);
    puts(s);
    int n = strlen(s);
    for(int i=0; i<n; i++)
    {
        if(chuHoa(s[i])== 1||chuThuong(s[i])==1)
        {
            s1 = s1 + s[i];
        }
    }
    int m = strlen(s1);
    for(int i=0;i<m;i++)
    {
        cout<<s1[i];
    }
}
//void chuoimoistring()
//{
//    int n = s.length();
//
//     for(int i=0;i<n;i++)
//    {
//        if(chuHoa(s[i])== 1||chuThuong(s[i])==1)
//        {
//            s1 = s1+s[i];
//        }
//    }
//    cout<<s1<<endl;
//}
//void sapxepchuoi()
//{
//    int n = s.length();
//    for(int i=0;i<n-1;i++)
//    {
//        int ma = i;
//        for(int j = i+1 ;j<n;j++)
//        {
//            if(s[ma]<s[j])
//            {
//                ma = j;
//            }
//        }
//        if(ma!=i)
//        {
//            swap(s[i],s[ma]);
//        }
//    }
//}
//void xuatchuoi()
//{
//    int n = s.length();
//     for(int i=0;i<n;i++)
//    {
//        cout<<s[i];
//    }
//}
int main()
{
    cout << "Hello world!" << endl;
  //  cout<<s<<endl;
    //sapxepchuoi();
    //xuatchuoi();
    //chuoimoistring();
    chuoimoichar();
    return 0;
}
