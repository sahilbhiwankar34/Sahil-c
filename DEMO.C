#include<stdio.h>
#include<graphics.h>
void main() {
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C\\TURBOC3\\BGI");
	setbkcolor(BLUE);
	setcolor(RED);
	setfillstyle(SOLID_FILL,GREEN);
	ellipse(200,200,0,360,100,80);
	floodfill(200,200,RED);
	getch();
	closegraph();
}
