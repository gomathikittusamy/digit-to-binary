#include<stdio.h>
#include<conio.h>
void main()
{
int r,i=1,n,bin=0;
clrscr();
scanf("%d",&n);
while(n!=0)
{
r=n%2;
n=n/2;
bin=bin+r*i;
i*=10;
}
printf("%d ",bin);

getch();
}
