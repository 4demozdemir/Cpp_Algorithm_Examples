#include<stdio.h>
#include<conio.h>
#include<dos.h>
int yas[5],bar;char i,j;char ad[5][20],tpl=0,ort=0,ort_b=0;
void main()
{

clrscr();
for(i=0;i<5;i++)
	{
	printf("%d. ad gir",i+1);scanf("%s",ad[i]);
	printf("%d. yaŸ gir",i+1);scanf("%d",&yas[i]);
	tpl=tpl+yas[i];
	}
	ort=tpl/5;
	ort_b=ort/5;
	printf("%d",ort_b);getch();
clrscr();

gotoxy(7,22);printf("_________________________________________________________________________");
for(i=0;i<5;i++)
	{textcolor(i+8);
	gotoxy(15*(i+1),23);printf("%s",ad[i]);
	bar=yas[i]/5;
		for(j=1;j<=bar;j++)
		{gotoxy(15*(i+1),22-j);cprintf("²³±³°²");delay(40);}
	gotoxy(15*(i+1)+2,22-j);printf("%d",yas[i]);
	}

	gotoxy(5,22-ort_b);printf("_____________________________________________________");
	getch();}






