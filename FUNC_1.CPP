#include<stdio.h>
#include<conio.h>

void toplama(int a, int b)
{int t;
t=a+b;
printf("Sonuc = %d",t);
}
int topla(int a,int b)
{
return a+b;
}
void ciz(int sutun,int satir, int a, char sekil)
{
for(int i=1;i<=a;i++)
{gotoxy(i+sutun,satir);printf("%c",sekil);}
}

void main()
{
clrscr();
/*for(int i=1;i<=topla(5,7);i++)
printf("%d\n",i);
toplama(6,7);*/
ciz(15,3,20,'?');ciz(17,9,30,'=');
getch();}






