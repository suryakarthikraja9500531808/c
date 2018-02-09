#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,n;
clrscr();
printf("enter the array size:\t");
scanf("%d\n",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
printf("%d\t%d\n",a[i],i);
}
return 0;
}
