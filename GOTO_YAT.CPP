#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
{

clrscr();
	for(int i=1;i<=25;i++)
	{
	  if (i%2!=0)  for(int j=1;j<=80;j++) printf("/");
			else
			for(int j=1;j<=80;j++) printf("\\");

	  getch();
	 }








for(i=1;i<=20;i++)
{gotoxy(20,i+1);printf(" ");gotoxy(20,i+2);printf("²");delay(100);}
for(i=23;i>3;i--)
{gotoxy(30,i-1);printf(" ");gotoxy(30,i-2);printf("²");delay(80);}
for(i=1;i<=20;i++)
{gotoxy(40,i+1);printf(" ");gotoxy(40,i+2);printf("²");delay(60);}
for(i=23;i>3;i--)
{gotoxy(50,i-1);printf(" ");gotoxy(50,i-2);printf("²");delay(40);}
for(i=1;i<=20;i++)
{gotoxy(60,i+1);printf(" ");gotoxy(60,i+2);printf("²");delay(20);}




 getch();
 }