#include <graphics.h>
#include <conio.h>
void EightWaySymmetricPlot(int h,int k,int x,int y)
{
    putpixel(x+h,y+k,GREEN);
    putpixel(x+h,-y+k,GREEN);
    putpixel(-x+h,-y+k,GREEN);
    putpixel(-x+h,y+k,GREEN);
    putpixel(y+h,x+k,GREEN);
    putpixel(y+h,-x+k,GREEN);
    putpixel(-y+h,-x+k,GREEN);
    putpixel(-y+h,x+k,GREEN);
}
void midpointCircle(int h,int k,int r)
{
    int x=0,y=r,d=1-r;
    EightWaySymmetricPlot(h,k,x,y);

    while(x<=y){
        if(d<=0){
            d=d+(2*x)+3;
        }
        else {
            d=d+(2*x)-(2*y)+5;
            y--;
        }
        x++;
        EightWaySymmetricPlot(h,k,x,y);
    }
}
int main(){
    int h,k,r,gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");
    printf("Enter the value of h: ");
    scanf("%d",&h);
    printf("Enter the value of k: ");
    scanf("%d",&k);
    printf("Enter the value of radius: ");
    scanf("%d",&r);
    midpointCircle(h,k,r);
    getch();
    closegraph();
    return 0;
}


