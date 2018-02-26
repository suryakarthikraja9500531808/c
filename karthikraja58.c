#include<stdio.h>
#include<conio.h>
void main()
{
int i,k;
printf("\nEnter the values before swapping)";
scanf("%d%d"&i&k);
i=i^k;
k=i^k;
i=i^k;
printf("\nEnter the values after swapping");
getch();
}
