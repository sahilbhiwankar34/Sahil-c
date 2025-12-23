#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main() {
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setfillstyle(SOLID_FILL,RED);
	rectangle(200,200,500,400);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(300,300,30);
	getch();
	closegraph();
}

