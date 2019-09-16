#include<iostream>
#include<graphics.h>

using namespace std;

void put8Point(int x,int y,int xA,int yA,int color)
{
    putpixel(x+xA,y+yA,color);
    putpixel(-x+xA,y+yA,color);
    putpixel(x+xA,-y+yA,color);
    putpixel(-x+xA,-y+yA,color);
    putpixel(y+xA,x+yA,color);
    putpixel(-y+xA,x+yA,color);
    putpixel(y+xA,-x+yA,color);
    putpixel(-y+xA,-x+yA,color);
}

void drawCircle(int xA,int yA,int R,int color)
{
    int x=0;
    int y=R;
    int P=1-R;
    while(x<=y)
    {
        put8Point(x,y,xA,yA,color);
        delay(10);
        if(P<0)
            P+= 4*x+6;
        else
        {
            P+= 4*(x-y)+10;
            y--;
        }
        x++;
    }
}

int main()
{
    initwindow(640,480);
    drawCircle(250,250,100,9);
    getch();
    closegraph();
}
