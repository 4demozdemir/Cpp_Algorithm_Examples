#include<stdio.h>
#include<conio.h>



void fkt(int a)
{int f=1;
for(int i=1;i<=a;i++)
f=f*i;
printf("Sonuc = %d",f);
}

int fkt_1(int a)
{
int f=1;
for(int i=1;i<=a;i++)
f=f*i;
return f;
}

void main()
{int a;
clrscr();
printf("Hangi say");scanf("%d",&a);
int s=fkt_1(a);
printf("%d\n",s);
fkt(a);
getch();}






