#include<stdio.h>
#include<conio.h>
int t,a,sayac=1;
int tus;
void main()

{
clrscr();
do
{
printf("%d. sayçyç gir",sayac);scanf("%d",&a);
t=t+a;
sayac++;
printf("Seáiminiz...(Äçkçü=Esc) \n");
tus=getch();
printf("Sonuá =%d\n",t);
}while(tus!=27);

getch();}






