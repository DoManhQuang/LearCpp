#include<iostream>
#include<graphics.h>

using namespace std;

struct KOD
{
    int b1,b2,b3,b4;
};

KOD convertKOD (int x,int y,int x1,int y1,int x2,int y2)
{
    KOD X;
    X.b1=X.b2=X.b3=X.b4=0;
    if(x<x1)    X.b1=1;
    if(x>x2)    X.b2=1;
    if(y<y1)    X.b3=1;
    if(y>y2)    X.b4=1;
    return X;
}

int he10 (KOD X)
{
    return X.b1+X.b2*2+X.b3*4+X.b4*8;
}

void cohen (int xA,int yA,int xB,int yB,int x1,int y1,int x2,int y2,int color)
{
    while(true)
    {
        KOD A=convertKOD (xA,yA,x1,y1,x2,y2);
        KOD B=convertKOD (xB,yB,x1,y1,x2,y2);
        int A10=he10(A);
        int B10=he10(B);
        if(A10==0 && B10==0)
        {
            setcolor(color);
            line(xA,yA,xB,yB);
            break;
        }
        if( (A10&B10)!=0)
            break;
        else
        {
            if(A10==0)
            {
                swap(xA,xB);
                swap(yA,yB);
                continue;
            }
            if(A.b1==1)
            {
                yA=((float)(yB-yA)/(xB-xA))*(x1-xA)+yA;
                xA=x1;
            }
            if(A.b2==1)
            {
                yA=((float)(yB-yA)/(xB-xA))*(x2-xA)+yA;
                xA=x2;
            }
            if(A.b3==1)
            {
                xA=((float)(xB-xA)/(yB-yA))*(y1-yA)+xA;
                yA=y1;
            }
            if(A.b4==1)
            {
                xA=((float)(xB-xA)/(yB-yA))*(y2-yA)+xA;
                yA=y2;
            }
        }
    }



}

int main()
{
    initwindow(640,480);
    line(100,100,300,350);
    cohen(100,100,300,350,100,100,250,250,YELLOW);
    getch();
    closegraph();
}
