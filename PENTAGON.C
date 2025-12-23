#include<stdio.h>
#include<graphics.h>
void main() {
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	moveto(50,50);
	lineto(25,100);
	lineto(40,200);
	lineto(80,200);
	lineto(100,100);
	lineto(50,50);
	getch();
	closegraph();
}
