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
void VeCircleMidPoint(int xa, int ya, int r)
{
    int x=0, y=r, p=1-r;
    Ve8Diem(x,y,xa,ya,200);
    while(x<y){
        if(p>0){
            p+= 2*(x-y)+5;
            y--;
        }
        else
        {
            p+=2*x+3;
        }
        x++;
        Ve8Diem(x,y,xa,ya,200);
    }
}
int main()
{
    initwindow(720,480);
    VeCircleMidPoint(150,100,50);
    getch();
    closegraph();
    return 0;
}
