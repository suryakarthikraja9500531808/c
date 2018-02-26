#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
printf("\nEnter two numbers");
scanf("%d%d"&x,&y);
printf("before the swapping");
swap(x,y);
printf("after the swapping");
swap(y,x);
getch();
}
