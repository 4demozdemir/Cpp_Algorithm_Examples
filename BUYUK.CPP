#include<stdio.h>
#include<conio.h>
int j,k,s[4],bos=0;
void main()
{
clrscr();

for(k=0;k<4;k++)
	{
	printf("%d. sayy giriniz",k+1);
	scanf("%d",&s[k]);
	}
	for(k=0;k<3;k++)
	 for(j=k+1;j<4;j++)
		if(s[k]>s[j])
			{
			bos=s[k];
			s[k]=s[j];
			s[j]=bos;
			}
for(k=0;k<4;k++)
		printf("%d\n",s[k]);


getch();}






