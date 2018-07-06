#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void red()
{
	setcolor(BROWN);
	rectangle(50,50,150,150);
	rectangle(50,150,150,250);
	rectangle(50,250,150,350);
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(100,100,50);
	floodfill(100,100,RED);
	outtextxy(150,100," STOP!!");
}
void yellow()
{
	setcolor(BROWN);
	rectangle(50,50,150,150);
	rectangle(50,150,150,250);
	rectangle(50,250,150,350);
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(100,200,50);
	floodfill(100,200,YELLOW);
	outtextxy(150,200," GET READY!!");
}
void green()
{
	setcolor(BROWN);
	rectangle(50,50,150,150);
	rectangle(50,150,150,250);
	rectangle(50,250,150,350);
	setcolor(GREEN);
	setfillstyle(SOLID_FILL,GREEN);
	circle(100,300,50);
	floodfill(100,300,GREEN);
	outtextxy(150,300," GO!!!");
}
void count()
{
	int i;
	for(i=10;i>0;i--)
	{
		printf("%d",i);
		printf("->");
		delay(1000);
	}
	printf("\n");
}
void main()
{
	int gd=DETECT, gm, num, i;
	initgraph(&gd,&gm, "C:\\turboc3\\bgi");
	clrscr();
	printf("Enter a number 1,2 or 3:\n");
	scanf("%d", &num);
	if(num==1)
	{
		count();
		red();
	}
	else if(num==2)
	{
		count();
		yellow();
	}
	else if(num==3)
	{
		count();
		green();
	}
	else
	{
		textcolor(RED+BLINK);
		cprintf("Invalid entry");
	}
	getch();
	closegraph();
}