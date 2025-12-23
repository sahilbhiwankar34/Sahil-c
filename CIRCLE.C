
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main() {
	int gd=DETECT,gm;
	int X;
	int Y;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(CYAN);
	setfillstyle(SOLID_FILL,BLUE);
	circle(200,200,100);
		floodfill(200,200,WHITE);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(200,200,70);
		floodfill(200,200,WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	circle(200,200,50);
	floodfill(200,200,WHITE);
	setfillstyle(SOLID_FILL,RED);
	circle(200,200,10);
	floodfill(200,200,WHITE);
	getch();
	closegraph;
	
}
