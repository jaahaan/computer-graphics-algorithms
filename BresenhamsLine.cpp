#include<stdio.h>
#include<graphics.h>
void drawline(int x0, int y0, int x1, int y1)
{
int dx, dy, d, x, y;
dx=x1-x0;
dy=y1-y0;
x=x0;
y=y0;
d=2*dy-dx;
while(x<x1)
{
if(d>=0)
{
putpixel(x,y,RED);
y=y+1;

d = d + 2*dy - 2*dx;
}
else
{
putpixel(x,y,7);
d = d + 2*dy;
}
x++;
}
}
int main()
{
int gdriver=DETECT, gmode, error, x0, y0, x1, y1;
initgraph(&gdriver, &gmode, "");
printf("Enter co-ordinates of start point: ");
scanf("%d%d", &x0, &y0);
printf("Enter co-ordinates of end point: ");
scanf("%d%d", &x1, &y1);
drawline(x0, y0, x1, y1);
getch();
closegraph();
return 0;
}
