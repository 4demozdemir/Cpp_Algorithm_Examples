#include<stdio.h>
#include<conio.h>
int k,vize,final,ort;
char ad[20];
void main()
{
clrscr();

for(k=1;k<=5;k++)
	{
	printf("%d. kiüinin adçnç gir",k);
	scanf("%s",ad);
	printf("%d. kiüinin vize notu",k);
	scanf("%d",&vize);
	printf("%d. kiüinin final notu",k);
	scanf("%d",&final);
	ort=(vize*0.4)+(final*0.6);
	if (ort>=70) 	printf("%s %d ile geáti \n",ad,ort);
			else
			printf("%s %d ile kaldç \n",ad,ort);
	}

getch();}






