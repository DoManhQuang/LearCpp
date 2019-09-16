#include <iostream>
#include <graphics.h>

using namespace std;

/*
        d   c
    a           b

    b
            c

            d
    a
*/


void ToMauDongQuet (int yA,int yB,int yC,int yD,int xmin,int xmax,int color)
{
    int y1,y2;
    int x=xmin;
    while(x<=xmax)
    {
        y1=((float)(yD-yA)/(xmax-xmin))*(x-xmin)+yA;
        y2=((float)(yC-yB)/(xmax-xmin))*(x-xmin)+yB;
        setcolor(color);
        line(x,y1,x,y2);
        delay(10);
        x++;
    }
}

void ToMauLucGiac (int y1,int y2,int y3,int y4,int x1,int x2,int x3,int color)
{
    ToMauDongQuet(y2,y3,y4,y1,x1,x2,color);
    ToMauDongQuet(y1,y4,y3,y2,x2,x3,color);
}

int main()
{
    initwindow(640,480);
    ToMauLucGiac(50,100,200,250,100,200,300,YELLOW);
    getch();
    closegraph();
}
