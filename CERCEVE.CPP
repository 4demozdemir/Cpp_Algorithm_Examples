#include<stdio.h>
#include<conio.h>
void sil()
{
clrscr();
}
void cer(int x1,int y1, int x2, int y2)
{
	for(int i=x1;i<=x2;i++)
	{
	gotoxy(i,y1);printf("*");
	gotoxy(i,y2);printf("*"); }
	for(int j=y1;j<=y2;j++)
	{
	gotoxy(x1,j);printf("*");
	gotoxy(x2,j);printf("*"); }
}
void main()
{sil();
cer(25,5,55,15);cer(20,9,60,11);cer(1,1,80,24);
getch();}






