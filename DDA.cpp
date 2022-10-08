#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void drawline(int x0, int y0, int x1, int y1){
float x, y,dx,dy,steps;
dx = (float)(x1 - x0);
dy = (float)(y1 - y0);
if(dx>=dy){
steps = dx;
}
else {
steps = dy;
}
dx = dx/steps;
dy = dy/steps;
x = x0;
y = y0;
int i = 1;
while(i<= steps){
putpixel(x, y, RED);
x += dx;
y += dy;
i++;
}
}
int main(){
int gdriver = DETECT ,gmode;
int x0, x1, y0, y1;
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
