//function with arguments without return value
#include<stdio.h>
#include<conio.h>
void sum(int,int);

void main()
{
	clrscr();
	sum(3,5);
	getch();
}
void sum(int num1,int num2)
{
	printf("sum of %d and %d is %d",num1,num2,num1+num2);
}
