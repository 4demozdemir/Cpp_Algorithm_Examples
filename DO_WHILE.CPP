#include<stdio.h>
#include<conio.h>
int t,a,sayac=1;
int tus;
void main()

{
clrscr();
do
{
printf("%d. say�y� gir",sayac);scanf("%d",&a);
t=t+a;
sayac++;
printf("Se�iminiz...(��k��=Esc) \n");
tus=getch();
printf("Sonu� =%d\n",t);
}while(tus!=27);

getch();}






