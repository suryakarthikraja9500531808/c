#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        printf("%d",n);
    }
    getch();
}
    
    
   
