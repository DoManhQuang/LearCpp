#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int year;
    string gender;/// Gioi tinh
    float avg; /// DTB
};
Student stu[50];
int n;

void InputData()
{

    cout<<"Nhap so luong sinh vien : ";
    cin>>n;
    fflush(stdin);
    for(int i=0; i<n; i++)
    {
        cout<<"Name : ";
        cin>>stu[i].name;
        cout<<"Year : ";
        cin>>stu[i].year;
        fflush(stdin);
        cout<<"Gender : ";
        cin>>stu[i].gender;
        cout<<"AVG : ";
        cin>>stu[i].avg;
    }
}
void Output()
{
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Name : "<<stu[i].name<<", BirthDay : "<<stu[i].year<<", Gender : "<<stu[i].gender<<", AVG : "<<stu[i].avg<<endl;
    }
}
void ListStu_Avg() /// danh sach sinh vien co diem trung binh lon hon 6.5
{
    cout<<endl;
    for(int i=0;i<n;i++){
        if(stu[i].avg>=6.5){
            cout<<"Name : "<<stu[i].name<<", BirthDay : "<<stu[i].year<<", Gender : "<<stu[i].gender<<", AVG : "<<stu[i].avg<<endl;
        }
    }
}
void ListStu_Year_2000() /// danh sach sinh vien sinh nam 2000
{
    cout<<endl;
    for(int i=0;i<n;i++){
        if(stu[i].year < 2000){
            cout<<"Name : "<<stu[i].name<<", BirthDay : "<<stu[i].year<<", Gender : "<<stu[i].gender<<", AVG : "<<stu[i].avg<<endl;
        }
    }
}
Student stuX;
void CreateStu() /// them sinh vien
{
    cout<<"Name : ";
    cin>>stuX.name;
    cout<<"Year : ";
    cin>>stuX.year;
    cout<<"Gender : ";
    cin>>stuX.gender;
    cout<<"AVG : ";
    cin>>stuX.avg;
}
void insertStu_vtX(int vitri, int &n , Student stuX) /// them vao vi tri X
{
    for(int i=n; i>=vitri; i--)
    {
        stu[i]=stu[i-1]; /// dãn mảng để chèn
    }
    stu[vitri-1]=stuX;
    n++;
}
void insertStu_vtc(int &n,Student stuX) ///them vao cuoi
{
    stu[n]=stuX;
    n++;
}

void EditStu()
{
    cout<<endl;
    int vitri; /// vi tri chen
    cout<<"Nhap vi tri chen ";
    cin>>vitri;
    if(vitri < n)
    {
        CreateStu();/// tao 1 sinh vien moi
        insertStu_vtX(vitri,n,stuX);
    }
    else
    {
        CreateStu();/// tao 1 sinh vien moi
        insertStu_vtc(n,stuX);
    }
}
void Delete_year_2000(int &n)
{
    for(int i=0; i<n; i++){ /// duyet danh sach
        if(stu[i].year==2000) /// kiem tra year = 2000
        {
            for(int j=i; j<n; j++)
                stu[j]=stu[j+1]; /// xoa
            n--;
            i--;
        }
    }
}
int main()
{
    cout << "Hello world!" << endl;
    InputData();
    cout<<"DS Sinh vien "<<endl;
    Output(); /// phan thu 1
    cout<<"DS Sinh vien AVG >= 6.5 "<<endl;
    ListStu_Avg(); /// phan thu 2
    cout<<"DS Sinh vien Year < 2000 "<<endl;
    ListStu_Year_2000();/// phan thu 3
    cout<<"Nhap sinh vien moi va chen "<<endl;
    EditStu();/// phan thu 4
    cout<<"Xoa DS Sinh vien year = 200"<<endl;
    Delete_year_2000(n);/// phan thu 5
    cout<<"DS Sinh vien sau khi xoa "<<endl;
    Output();
    return 0;
}
