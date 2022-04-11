#include<stdio.h>
#include<conio.h>
int t,gort,cizgi,adet,k,gt,v[4],f[4],ort[4];
char ad[4][20];
void main()
{
clrscr();

for(k=0;k<4;k++)
	{
	printf("%d. kiŸinin adn gir",k+1);scanf("%s",ad[k]);
	printf("%d. kiŸinin vize notu",k+1);scanf("%d",&v[k]);
	printf("%d. kiŸinin final notu",k+1);scanf("%d",&f[k]);
	ort[k]=(v[k]*0.4)+(f[k]*0.6);
	t=t+ort[k];
	}
	gort=t/k;
clrscr();
	cizgi=gort/5;
	for(int i=5;i<=50;i+=3)
	{gotoxy(i,22-cizgi);printf("%d-",gort);}

for(k=0;k<4;k++)
	{

	gotoxy(10*(k+1),22);printf("%s",ad[k]);
	adet=ort[k]/5;
	for(int j=1;j<=adet;j++)
	{gotoxy(10*(k+1),22-j);printf("²±²");}
	gotoxy(10*(k+1),22-j);printf("-");
	}
getch();}






