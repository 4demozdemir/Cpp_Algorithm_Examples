#include<stdio.h>
#include<conio.h>
int sayi[5],tek[5],cift[5],bos=0;char c=0,t=0,i,j;
void main()
{
clrscr();

for(i=0;i<5;i++)
	{printf("%d. sayy gir",i+1);scanf("%d",&sayi[i]);}
	for(i=0;i<4;i++)
	    for(j=i+1;j<5;j++)
	    if(sayi[i]>sayi[j])
		{
		bos=sayi[i];
		sayi[i]=sayi[j];
		sayi[j]=bos;
		}
for(i=0;i<5;i++)
	if(sayi[i]%2==0) {cift[c]=sayi[i];c++;}
		else
			{tek[t]=sayi[i];t++;}
printf("\n");
printf("________Genel Sralama________\n");
for(i=0;i<5;i++)
printf("%d. say =%d \n",i+1,sayi[i]);
printf("\n");
printf("_________Tek Sralama_________\n");
for(i=0;i<t;i++)
printf("%d. Tek say =%d \n",i+1,tek[i]);
printf("\n");
printf("________€ift Sralama_________\n");
for(i=0;i<c;i++)
printf("%d. €ift say =%d \n",i+1,cift[i]);

getch();}






