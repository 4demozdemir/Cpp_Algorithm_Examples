#include<stdio.h>
#include<conio.h>
int a,b,t;
char tus,ad[20];
void main()
{clrscr();
printf("1.say�y� gir");scanf("%d",&a);
printf("2.say�y� gir");scanf("%d",&b);

printf("Se�imin +,-,*,/)");
tus=getch();
do
{
switch (tus)
{
case '+':t=a+b;break;
case '-':t=a-b;break;
case '*':t=a*b;break;
case '/':t=a/b;break;

}
gotoxy(10,10);printf("Sonu� = %4d\n",t);
tus=getch();
}while(tus!=27);
getch();}






