#include <stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,mul;
	cin>>n1>>n2;
	mul=n1*n2;
	if(mul%2==0)
	{
	    cout<<"even";
	}
	else
	{
	    cout<<"odd";
	}
	getch();
}
