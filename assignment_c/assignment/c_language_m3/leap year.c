#include<stdio.h>
int main()
{
	int a;
	printf("enter any year: ");
	scanf("%d",&a);
	if(a%400==0 || a%4==0 && a%100!=0)
	{
		printf("year is leap year");
	}
	else
	{
		printf("year is not leapyear");
	}
}