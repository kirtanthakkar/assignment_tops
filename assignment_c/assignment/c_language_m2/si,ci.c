#include<stdio.h>
int main()
{
	int p,r,t,a,si,ci;
	printf("enter the principle amount= ");
	scanf("%d",&p);
	printf("enter the rate of inerest= ");
	scanf("%d",&r);
	printf("enter the time duration= ");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("the simple interest is %d",si);
	a=p*((1+r/100),t);
	ci=a-p;
	printf("the compound interest is %d",ci);
	
	return 0;
	
}