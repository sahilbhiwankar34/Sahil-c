#include<graphics.h>
#include<stdio.h>
void main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	
	setbkcolor(BLUE);
	setfillstyle(SOLID_FILL,RED);
	ellipse(200,200,0,360,30,20);
	floodfill(200,200,WHITE);
	getch();
	closegraph();
}
