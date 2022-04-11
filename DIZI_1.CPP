#include<stdio.h>
#include<conio.h>
int k,gt,gort,v[4],f[4],ort[4];
char ad[4][20];
void main()
{
clrscr();

for(k=0;k<4;k++)
	{
	printf("%d. kiŸinin adn gir",k+1);
	scanf("%s",ad[k]);
	printf("%d. kiŸinin vize notu",k+1);
	scanf("%d",&v[k]);
	printf("%d. kiŸinin final notu",k+1);
	scanf("%d",&f[k]);
	ort[k]=(v[k]*0.4)+(f[k]*0.6);
	}
for(k=0;k<4;k++)
		printf("%s\t%d\t%d\n",ad[k],v[k],f[k],ort[k]);


getch();}






