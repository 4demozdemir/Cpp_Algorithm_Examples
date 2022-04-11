#include<stdio.h>
#include<conio.h>
int k=1,vize,final;
float ort;
char ad[20];
void main()
{
clrscr();

	printf("%d. kiüinin adçnç gir",k);scanf("%s",ad);
	printf("%d. kiüinin vize notu",k);scanf("%d",&vize);
	printf("%d. kiüinin final notu",k);scanf("%d",&final);
	ort=(vize*0.4)+(final*0.6);
	if (ort>=70) 	printf("%s %f ile geáti \n",ad,ort);
			else
			printf("%s %f ile kaldç \n",ad,ort);


getch();}






