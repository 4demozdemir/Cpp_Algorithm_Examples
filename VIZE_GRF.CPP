#include<stdio.h>
#include<conio.h>
int gt,gort,i,vize[5],final[5],ort[5];char ad[5][20];

void main()
{
clrscr();
for(i=0;i<5;i++)
	{
	printf("%d. ki�inin ad�n� gir",i+1);scanf("%s",ad[i]);
	printf("%d. ki�inin vize notu",i+1);scanf("%d",&vize[i]);
	printf("%d. ki�inin final notu",i+1);scanf("%d",&final[i]);
	ort[i]=(vize[i]*0.4)+(final[i]*0.6);
	gt=gt+ort[i];
	}
	gort=gt/i;printf("Genel Ortalama = %d\n",gort);
	clrscr();

for(i=0;i<5;i++)
	printf("%s\t%d\t%d\t%d\n",ad[i],vize[i],final[i],ort[i]);

	printf("\n\n");
for(i=0;i<5;i++)

	{
	printf("%s\t",ad[i]);
	for(int j=0;j<=ort[i];j+=2)
	printf("�");
printf("%d\n\n",ort[i]);
	}

getch();}






