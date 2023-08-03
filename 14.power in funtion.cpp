#include<stdio.h>
int main()
{
void power();
power();
return 0;
}
void power()
{
int i,p=1,b,e;
scanf("%d%d",&b,&e);
for(i=1;i<=e;i++)
{
p=p*b;
}
printf("%d",p);
}
