#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

void EightWaySymmetricPlot(int h,int k,int x,int y){
    putpixel(x+h,y+k,GREEN);
    putpixel(x+h,-y+k,GREEN);
    putpixel(-x+h,-y+k,GREEN);
    putpixel(-x+h,y+k,GREEN);
    putpixel(y+h,x+k,GREEN);
    putpixel(y+h,-x+k,GREEN);
    putpixel(-y+h,-x+k,GREEN);
    putpixel(-y+h,x+k,GREEN);
}

void BresenhamCircle(int h,int k,int r){
    int x=0,y=r,d=3-(2*r);
    EightWaySymmetricPlot(h,k,x,y);
    while(x<=y){
        if(d<=0){
            d=d+(4*x)+6;
        }
        else {
            d=d+(4*x)-(4*y)+10;
            y--;
        }
        x++;
        EightWaySymmetricPlot(h,k,x,y);
    }
}
int main(){
    int h,k,r,gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "");

    errorcode = graphresult();
    if (errorcode != grOk){
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("Press any key to halt:");
        getch();
        exit(1);
    }
    printf("Enter the values of h: ");
    scanf("%d",&h);
    printf("Enter the values of k: ");
    scanf("%d",&k);
    printf("Enter the value of radius: ");
    scanf("%d",&r);
    BresenhamCircle(h,k,r);
    getch();
    closegraph();
return 0;
}
