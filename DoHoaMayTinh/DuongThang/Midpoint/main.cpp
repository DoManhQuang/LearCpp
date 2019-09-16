#include <iostream>
#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;

void VeMidpoint01(int xa, int ya, int xb, int yb)
{
    if(xa > xb)
    {
        swap(xa,xb);
        swap(ya,yb);
    }
    int dx=xb-xa, dy=yb-ya;
    int const1 = 2*dy, const2 = 2*dy - 2*dx;
    int p=2*dy-dx, x=xa, y=ya;
    while(x<xb)
    {
        putpixel(x,y,200);
        x++;
        if(p<0)
        {
            p+=const1;
        }
        else{
            y++, p+=const2;
        }
    }
}
void VeMidpoint02(int xa, int ya, int xb, int yb)
{
    if(ya > yb)
    {
        swap(xa,xb);
        swap(ya,yb);
    }
    int dx=xb-xa, dy=yb-ya;
    int const1 = 2*dx, const2 = 2*dx - 2*dy;
    int p=2*dx-dy, x=xa, y=ya;
    while(y<yb)
    {
        putpixel(x,y,200);
        y++;
        if(p<0)
        {
            p+=const1;
        }
        else{
            x++, p+=const2;
        }
    }
}
void VeMidpoint03(int xa, int ya, int xb, int yb)
{
    if(xa > xb)
    {
        swap(xa,xb);
        swap(ya,yb);
    }
    int dx=xb-xa, dy=yb-ya;
    int const1 = 2*dy, const2 = 2*dy - 2*dx;
    int p=2*dy-dx, x=xa, y=ya;
    while(x<xb)
    {
        putpixel(x,y,200);
        x++;
        if(p>0)
        {
            p+=const1;
        }
        else{
            y--, p+=const2;
        }
    }
}
void VeMidpoint04(int xa, int ya, int xb, int yb)
{
    if(ya > yb)
    {
        swap(xa,xb);
        swap(ya,yb);
    }
    int dx=xb-xa, dy=yb-ya;
    int const1 = 2*dx, const2 = 2*dx - 2*dy;
    int p=2*dx-dy, x=xa, y=ya;
    while(y<yb)
    {
        putpixel(x,y,200);
        y++;
        if(p>0)
        {
            p+=const1;
        }
        else{
            x--, p+=const2;
        }
    }
}
int main()
{
    initwindow(720,480);
    VeBresenham01(200,100,250,200);
    getch();
    closegraph();
    return 0;
}
