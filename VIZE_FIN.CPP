#include<stdio.h>
#include<conio.h>
int k,vize,final,ort;
char ad[20];
void main()
{
clrscr();

for(k=1;k<=5;k++)
	{
	printf("%d. ki�inin ad�n� gir",k);
	scanf("%s",ad);
	printf("%d. ki�inin vize notu",k);
	scanf("%d",&vize);
	printf("%d. ki�inin final notu",k);
	scanf("%d",&final);
	ort=(vize*0.4)+(final*0.6);
	if (ort>=70) 	printf("%s %d ile ge�ti \n",ad,ort);
			else
			printf("%s %d ile kald� \n",ad,ort);
	}

getch();}






