#include <iostream>
#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;
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
void VeCircleBresenham(int xa, int ya, int r)
{
    int x=0, y=r, p=3-2*r;
    while(x<=y){
        Ve8Diem(x,y,xa,ya,200);
        if(p>0){
            p+= 4*(x-y)+10;
            y--;
        }
        else
        {
            p+=4*x+6;
        }
        x++;
    }
}
int main()
{
    initwindow(720,480);
    VeCircleBresenham(150,100,50);
    getch();
    closegraph();
    return 0;
}
