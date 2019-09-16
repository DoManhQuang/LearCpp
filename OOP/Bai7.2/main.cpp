#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef int* Arrays;
Arrays a;
int n;
class Person
{
	private:
		string aName;
		string aBrith;
		string aAddress;
	public:
		void Input_Per();
		void Output_Per();
		Person(); // ham khoi tao
};
class School
{
    private:
        string aName;
        string aDate;
};
class Faculty
{
	private:
		string aName;
		string aDate;
		School x;
	public:
		void Input_Fac();
		void Output_Fac();
};
class Student:Person
{
	private:
		string aClass;
		string aScore;
		Faculty y;
	public:
		void Input_Stu();
		void Output_Stu();
		Student(); // ham khoi tao
};

void Person::Input_Per()
{
    cin>>aName;
    cin>>aBrith;
    cin>>aAddress;
}
void Person::Output_Per()
{
    cout<<endl;
    cout<<"Name : "<<aName<<"Brith : "<<aBrith<<"Address : "<<aAddress<<endl;
}

void Faculty::Input_Fac()
{
    cin>>aName;
    cin>>aDate;
    cin>>x.aName;
    cin>>x.aDate;
}
void Faculty::Output_Fac()
{
    cout<<endl;
    cout<<"Khoa hoc : "<<aName<<"Thoi gian hoc : "<<aDate<<" Truong : "x.aName<<" Thoi gian hoc "<<x.aDate;
}
void Student::Input_Stu()
{
    cin>>n; // nhap so luong hoc sinh
    a = new int a[n];
    Input_Per();
    cin>>aClass;
    cin>>aScore;
    Input_Fac();
}
void Student::Output_Stu()
{
    Output_Per();
    cout<<"\n Class :"<<aClass<<" Score : "<<aScore<<endl;
    Output_Fac();
}

int main()
{
    cout << "Hello world!" << endl;

    return 0;
}
