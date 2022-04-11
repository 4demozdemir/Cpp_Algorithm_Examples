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
	gt=gt+ort[k];
	}
	gort=gt/k;
	printf("Snf Ortalamas = %d\n",gort);
for(k=0;k<4;k++)
	if (ort[k]>=gort)
		printf("%s\t%d\t%d\t%d\tGE€T˜\n",ad[k],v[k],f[k],ort[k]);
		else
		printf("%s\t%d\t%d\t%d\tKALDI\n",ad[k],v[k],f[k],ort[k]);


getch();}






