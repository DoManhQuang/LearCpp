#include <iostream>
#include <graphics.h>

using namespace std;

void ToMauLoang (int x,int y,int mb,int mt)
{
    if(getpixel(x,y)!=mb  && getpixel(x,y)!=mt)
    {
        putpixel(x,y,mt);
        //delay(8);
        ToMauLoang(x+1,y,mb,mt);
        ToMauLoang(x,y+1,mb,mt);
        ToMauLoang(x,y-1,mb,mt);
        ToMauLoang(x-1,y,mb,mt);
    }
}

void ToMauBien1Part (int x,int y,int mb,int mt,int i)
{
    int xleft=x,xright=x;
    while(true)
    {
        while(getpixel(xleft-1,y)!=mb)  xleft--;
        while(getpixel(xright+1,y)!=mb) xright++;
        setcolor(mt);
        line(xleft,y,xright,y);
        delay(10);
        y+=i;
        while(getpixel(xleft,y)==mb)    xleft++;
        if(xleft<=xright)
            xright=x;
        else
            break;
    }
}

void ToMauBien (int x,int y,int mb,int mt)
{
    ToMauBien1Part(x,y,mb,mt,1);
    ToMauBien1Part(x,y,mb,mt,-1);
}

void ToMauBienX1Part (int x,int y,int mb,int mt,int i)
{
    int y1,y2;
    while(true)
    {
        y1=y2=y;
        while(getpixel(x,y1+1)!=mb)  y1++;
        while(getpixel(x,y2-1)!=mb)    y2--;
        setcolor(mt);
        line(x,y1,x,y2);
        delay(10);
        while(getpixel(x+i,y1)==mb) y1--;
        if(y1>=y2)
        {
            y=y1;
            x+=i;
        }
        else
            break;
    }
}

void ToMauBienX(int x,int y,int mb,int mt)
{
    ToMauBienX1Part(x,y,mb,mt,1);
    ToMauBienX1Part(x,y,mb,mt,-1);
}

void ToMauDongQuet (int xA,int ymin,int xB,int ymin1,int xC,int ymax,int xD,int ymax2,int color)
{
    int y=ymin;
    int xm1=xA,xm2=xB;
    while(y<=ymax)
    {
        setcolor(color);
        line(xm1,y,xm2,y);
        delay(10);
        y++;
        xm1= ((float)(xD-xA)/(ymax-ymin))*(y-ymin)+xA;
        xm2= ((float) (xC-xB)/(ymax-ymin))*(y-ymin)+xB;
    }
}


int main()
{
    initwindow(640,480);
    /*
    setcolor(WHITE);    //mb
    //To mau long
    circle(50,50,35);
    ToMauLoang(50,50,WHITE,RED);
    //To mau bien
    setcolor(WHITE);
    rectangle(50,300,200,100);
    ToMauBien(100,150,WHITE,BLUE);
    //to mau dong quet
    ToMauDongQuet(100,50,300,50,250,200,100,200,YELLOW);
    //*/
    int mb=BLUE,mt=YELLOW;
    setcolor(mb);
    circle(200,200,150);
    ToMauBienX(200,200,mb,mt);
    getch();
    closegraph();
}
