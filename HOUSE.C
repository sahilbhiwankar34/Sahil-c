#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main() {
	int gd=DETECT,gm;
	int arr[]={100,100,50,200,150,200,100,100};
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(GREEN);
 
 setfillstyle(SOLID_FILL,RED);
	drawpoly(4,arr);
	floodfill(200,150,WHITE);
   


	

	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(50,200,150,350);
	floodfill(200,150,WHITE);
	setfillstyle(SOLID_FILL,GREEN);
	rectangle(100,300,125,350);
	floodfill(300,125,WHITE);
	
	setfillstyle(SOLID_FILL,RED);
	rectangle(150,200,300,350);
	floodfill(200,300,WHITE);
	line(100,100,270,100);
	line(270,100,300,200);
	
	getch();
	closegraph();
	
}
