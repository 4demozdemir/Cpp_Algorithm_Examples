#include<stdio.h>
#include<conio.h>
int j,k,ort[4],sira[4],bos=0,index;
char ad[4];
void main()
{
clrscr();
for(k=0;k<4;k++)
	{
	printf("%d. ad",k+1);scanf("%s",ad[k]);
	printf("%d. ortalama",k+1);scanf("%d",&ort[k]);
	}


	for(k=0;k<3;k++)
	 {
	 for(j=k+1;j<4;j++)
		if(ort[k]>ort[j])
			{
			bos=ort[k];
			ort[k]=ort[j];
			ort[j]=bos;
			index=k;
			}
		sira[k]=index;
	 }

for(k=0;k<4;k++)
		printf("%d\t%d\n",ort[k],sira[k]);


getch();}






