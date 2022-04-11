#include<stdio.h>
#include<conio.h>





void ciz(int sat, int adet, char sekil)
{
for(int i=1;i<=adet;i++)
{gotoxy(10+i,sat);printf("%c",sekil);}
}
void sil()
{
clrscr();
}
void main()
{
sil();
ciz(10,20,'Í');getch();ciz(12,50,'+');getch();ciz(4,40,'/');
getch();}






