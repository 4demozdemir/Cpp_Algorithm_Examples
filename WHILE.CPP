#include<stdio.h>
#include<conio.h>
int a,b,t;
char tus,ad[20];
void main()
{
clrscr();
printf("1.say�y� gir");scanf("%d",&a);
printf("2.say�y� gir");scanf("%d",&b);
tus=getch();
switch (tus)
{
case '+':t=a+b;break;
case '-':t=a-b;break;
case '*':t=a*b;break;
case '/':t=a/b;break;
default: printf("Yanl�� Tu�a bast�n�z");
}
printf("Sonu� = %d",t);
getch();}






