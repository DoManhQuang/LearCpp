#include <iostream>
#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;

void Tomauloang(int x, int y, int maubien, int mauto)
{
    int maudiem = getpixel(x,y);
    if(maudiem!=mauto && maudiem!=maubien)
    {
        putpixel(x,y,mauto);
        Tomauloang(x-1,y,maubien,mauto);
        Tomauloang(x,y-1,maubien,mauto);
        Tomauloang(x+1,y,maubien,mauto);
        Tomauloang(x,y+1,maubien,mauto);
    }
}
int main()
{
    initwindow(720,480);
    int mb=12,mt=8;
    setcolor(mb);
    circle(100,50,30);
    Tomauloang(100,50,mb,mt);
    getch();
    closegraph();
    return 0;
}
