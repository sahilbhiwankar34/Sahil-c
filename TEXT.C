#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main() {
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	settextstyle(2,0,10);
	outtextxy(100,100,"Hello! Graphics Is fun");
	getch();
	closegraph();
}
