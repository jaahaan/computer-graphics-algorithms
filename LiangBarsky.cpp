#include<stdio.h>
#include <conio.h>
#include <graphics.h>
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x1,y1,x2,y2,xmax,xmin,ymax,ymin,xx1,yy1,xx2,yy2,dx,dy,i;
    int p[4],q[4];
    float t1=0, t2=1, temp;
    printf("Enter LL: ");
    scanf("%d%d", &xmin, &ymin);
    printf("Enter UR: ");
    scanf("%d%d", &xmax, &ymax);
    setcolor(GREEN);
    rectangle(xmin,ymin,xmax,ymax);
    printf("Enter x1 y1 x2 y2: ");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    line(x1,y1,x2,y2);
	dx=x2-x1;
	dy=y2-y1;
	p[0]=-dx;
	p[1]=dx;
	p[2]=-dy;
	p[3]=dy;
	q[0]=x1-xmin;
	q[1]=xmax-x1;
	q[2]=y1-ymin;
	q[3]=ymax-y1;
	for(i=0;i<4;i++){
            temp = (float)q[i]/p[i];
    if(p[i]<0){
            if(t1<temp){
                t1=temp;
			}
    }
    else if(p[i]>0){
            if(t2>temp){
                t2=temp;
			}
    }
    else{
        if(p[i]==0 && q[i] < 0){
            printf("Line is completely outside the window");
        }
        else{
            if(p[i]==0 && q[i] >= 0)
            printf("line is completely inside the window");
        }
    }
	}
	if (t1 < t2) {
		xx1=x1+t1*dx;
		xx2=x1+t2*dx;
		yy1=y1+t1*dy;
		yy2=y1+t2*dy;
		setcolor(WHITE);
		line(xx1,yy1,xx2,yy2);
	}
	else{
        printf("line lies out of the window");
	}
	getch();
closegraph();
}
