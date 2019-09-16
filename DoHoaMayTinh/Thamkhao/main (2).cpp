#include<iostream>
#include<graphics.h>

using namespace std;

void lineTH3(int x1,int y1,int x2 ,int y2,int color)
{
    if(x1>x2)
    {
        swap(x1,x2);
        swap(y1,y2);
    }
    int dx=x2-x1;
    int dy=y2-y1;
    int P=2*dy-dx;
    int const1=2*dy;
    int const2=2*(dy-dx);
    int x=x1,y=y1;
    while(x<=x2)
    {
        putpixel(x,y,color);
        delay(10);
        if(P<=0)
            P+=const1;
        else
        {
            P+=const2;
            y++;
        }
        x++;
    }
}


void lineTH4(int x1,int y1,int x2 ,int y2,int color)
{
    if(x1>x2)
    {
        swap(x1,x2);
        swap(y1,y2);
    }
    int dx=x2-x1;
    int dy=y2-y1;
    int P=2*dy+dx;
    int const1=2*dy;
    int const2=2*(dy+dx);
    int x=x1,y=y1;
    while(x<=x2)
    {
        putpixel(x,y,color);
        delay(10);
        if(P>=0)
            P+=const1;
        else
        {
            P+=const2;
            y--;
        }
        x++;
    }
}

//chay theo Oy,y++
void lineTH5(int x1,int y1,int x2 ,int y2,int color)
{
    if(y1>y2)
    {
        swap(x1,x2);
        swap(y1,y2);
    }
    int dx=x2-x1;
    int dy=y2-y1;
    int P=2*dx-dy;
    int const1=2*dx;
    int const2=2*(dx-dy);
    int x=x1,y=y1;
    while(y<=y2)
    {
        putpixel(x,y,color);
        delay(10);
        if(P<=0)
            P+=const1;
        else
        {
            P+=const2;
            x++;
        }
        y++;
    }
}

void lineTH6(int x1,int y1,int x2 ,int y2,int color)
{
    if(y1>y2)
    {
        swap(x1,x2);
        swap(y1,y2);
    }
    int dx=x2-x1;
    int dy=y2-y1;
    int P=2*dx+dy;
    int const1=2*dx;
    int const2=2*(dx+dy);
    int x=x1,y=y1;
    while(y<=y2)
    {
        putpixel(x,y,color);
        delay(10);
        if(P>=0)
            P+=const1;
        else
        {
            P+=const2;
            x--;
        }
        y++;
    }
}


int main()
{

    initwindow(640,480);
    //test
    line(50,50,300,200);
    lineTH3(300,200,50,50,YELLOW);
    //test
    line(50,200,300,50);
    lineTH4(300,50,50,200,RED);
    //test
    line(100,50,200,400);
    lineTH5(200,400,100,50,GREEN);
    //test
    line(100,350,180,50);
    lineTH6(180,50,100,350,BLUE);
    getch();
    closegraph();
}
