#include<stdio.h>
#include<conio.h>
int a,b,t;
char tus,ad[20];
void main()
{
clrscr();
printf("1.sayçyç gir");scanf("%d",&a);
printf("2.sayçyç gir");scanf("%d",&b);
tus=getch();
switch (tus)
{
case '+':t=a+b;break;
case '-':t=a-b;break;
case '*':t=a*b;break;
case '/':t=a/b;break;
default: printf("Yanlçü Tuüa bastçnçz");
}
printf("Sonuá = %d",t);




getch();}






