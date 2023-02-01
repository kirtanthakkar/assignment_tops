#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number for square\n");
	scanf("%d",&a);
	b=a*a;
	printf("square of given number %d=%d",a,b);
	int e,f;
	printf("enter a number for cube\n");
	scanf("%d",&e);
	f=e*e;
	printf("cuber of given number %d=%d",e,f);
	return 0;
}