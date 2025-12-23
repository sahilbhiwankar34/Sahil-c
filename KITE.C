#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main() {
	int gd=DETECT,gm;
	int sqr[] = {250,100,150,200,250,300,350,200,250,100};
	int tri[] = {250,300,150,350,350,350,250,300};
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
		setbkcolor(CYAN);
		setcolor(RED);
	drawpoly(5,sqr);
	floodfill(250,100,RED);
	setcolor(GREEN);
	drawpoly(4,tri);
	floodfill(250,300,GREEN);
	setcolor(YELLOW);
	line(250,100,250,300);
	setcolor(YELLOW);
	arc(250,300,45,120,145);
	
	getch();
	closegraph();
}
