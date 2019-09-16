#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char s[100];
char a[100];
void Nhaphienchuoi()
{
	cout << "Nhap chuoi : ";
	fflush(stdin);
	gets(s);
	cout <<endl<< "Chuoi vua nhap : "<<endl;
	puts(s);
}
void Hienchuoi()
{
	int n=strlen(s);
	for(int i=0;i<n;i++)
		{
		 cout<<s[i];
		}
}
bool So(char a)
{
	if(a>= '0' && a<= '9')
			return true;
	return false;
}
bool Chuhoa(char b)
{
	if(b>='Z' && b <='A')
		return true;
	return false;
}
bool Chuthuong(char c)
{
	if(c >= 'z' && c <= 'a')
		return true;
	return false;
}
void Ktrachuoihople()
{
    int check = 0;
    for(int i=0; i<strlen(s); i++)
    {
        if(So(s[i])|| s[i]>33 &&s[i] < 47 ) /// nếu s[i] là số hoặc là ký tự đặc biệt theo bảng mã ASCII
        {
            check = 1;
            break;
        }
    }
    if(check == 0 )
    {
        cout<<"Chuoi hop le"<<endl;
    }
    else{
        cout<<"Chuoi khong hop le"<<endl;
    }
}
void Demkytuchu()
{
	int chuhoa=0;
	int chuthuong=0;
   for(int i=0;i<strlen(s);i++)
   {
   	 if(Chuthuong(s[i]))
   	 	chuthuong++;
   	 else if(Chuhoa(s[i]))
   	 	chuhoa++;
   }
   cout<<"So chu hoa"<<chuhoa<<endl;
   cout<<"So chu thua"<<chuthuong<<endl;
   cout<<"So chu cai"<<(chuthuong+chuhoa)<<endl;
}
void Nhapchuoimoi()
{
    cout<<endl<<" Nhap chuoi moi :";
    fflush(stdin);
    gets(a);
}
void Sapxepbangchucai()
{
    for(int i=0;i<strlen(a)-1;i++)
    {
        int ma = i;
        for(int j=i+1;j<strlen(a);j++)
        {
            if(a[ma]<a[j])
            {
                j = ma;
            }
        }
        if(ma!=i)
        {
            swap(a[i],a[ma]);
        }
    }
}
void Hiennguoc()
{
	int n=strlen(s);
	for(int i=n-1;i>=0;i--)
		{
		 cout<<s[i];
		}
}
/// Chuẩn hóa chuỗi
int n= strlen(s);
void Xoakytu(char s[100],int vt)
{
	for(int i=vt;i<n;i++)
	{
         s[i+1]=s[i];
	}
}

void Xoadaucachdau(char s[100],int &n)
{

	int dem=0;
   for(int i=0;i<strlen(s);i++)
      {
      	if(s[i]==32)
      	 dem++;
        else if(s[i]!=32)
         break;
      }
   for(int i=0;i<n;i++)
	{
         s[i]=s[i+dem];
	}
	n--;
}
void Xoadaucachgiua(char s[100],int &n)
{
   for(int i=0;i<strlen(s);i++)
     if(s[i]==32 && s[i+1]==32)
        {
          Xoakytu(s,i);
        }
}

int main()
{
    cout << "Hello world!" << endl;
    Nhaphienchuoi();
  //  Xoadaucachdau(s,n);
    Xoadaucachgiua(s,n);
    Hienchuoi();
    return 0;
}
