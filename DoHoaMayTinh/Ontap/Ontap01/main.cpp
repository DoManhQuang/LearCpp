#include <iostream>
#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;
/*
/// TH 0<m<1
void VeBreasenham01(int xa, int ya, int xb, int yb, int color)
{
    if(xa > xb){
        swap(xa,xb);
        swap(ya,yb);
    }
    int dx=xb-xa, dy=yb-ya;
    int const1=2*dy, const2=2*dy-2*dx;
    int p=2*dy-dx, x=xa, y=ya;
    while(x<xb){
        putpixel(x,y,color);
        x++;
        if(p<0)
        {
            p+=const1;
        }
        else
        {
            y++, p+=const2;
        }
    }
}
/// TH m>1
void VeBreasenham02(int xa, int ya, int xb, int yb, int color)
{
    if(ya > yb){
        swap(xa,xb);
        swap(ya,yb);
    }
    int dx=xb-xa, dy=yb-ya;
    int const1=2*dx, const2=2*dx-2*dy;
    int p=2*dx-dy, x=xa, y=ya;
    while(y<yb){
        putpixel(x,y,color);
        y++;
        if(p<0)
        {
            p+=const1;
        }
        else
        {
            x++, p+=const2;
        }
    }
}
/// TH -1<m<0
void VeBreasenham03(int xa, int ya, int xb, int yb, int color)
{
    if(xa > xb){
        swap(xa,xb);
        swap(ya,yb);
    }
    int dx=xb-xa, dy=yb-ya;
    int const1=2*dy, const2=2*dy+2*dx;
    int p=2*dy+dx, x=xa, y=ya;
    while(x<xb){
        putpixel(x,y,color);
        x++;
        if(p>0)
        {
            p+=const1;
        }
        else
        {
            y--, p+=const2;
        }
    }
}
/// TH m<-1
void VeBreasenham04(int xa, int ya, int xb, int yb, int color)
{
    if(ya < yb){
        swap(xa,xb);
        swap(ya,yb);
    }
    int dx=xb-xa, dy=yb-ya;
    int const1=2*dx, const2=2*dx+2*dy;
    int p=2*dx+dy, x=xa, y=ya;
    while(y<yb){
        putpixel(x,y,color);
        y++;
        if(p>0)
        {
            p+=const1;
        }
        else
        {
            x--, p+=const2;
        }
    }
}
*/
void Ve8Diem(int x,int y, int xa, int ya, int color)
{
    putpixel(x+xa,y+ya,color);
    putpixel(x+xa,-y+ya,color);
    putpixel(-x+xa,y+ya,color);
    putpixel(-x+xa,-y+ya,color);
    putpixel(y+xa,x+ya,color);
    putpixel(y+xa,-x+ya,color);
    putpixel(-y+xa,x+ya,color);
    putpixel(-y+xa,-x+ya,color);
}
void VeduongtronBresenham(int xa, int ya, int r)
{
    int x=0, y=r, p=3-2*r;
    while(x<=y){
        Ve8Diem(x,y,xa,ya,15);
        if(p>0)
        {
            p+=4*(x-y)+10,y--;
        }
        else{
            p+=4*x+6;
        }
        x++;
    }
}
int main()
{
    initwindow(720,480);

    VeduongtronBresenham(100,50,50);

    getch();
    closegraph();
    return 0;
}
