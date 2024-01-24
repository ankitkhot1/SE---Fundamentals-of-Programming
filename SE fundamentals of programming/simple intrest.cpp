//Write a program to find simple interest
#include<stdio.h>
int main()
{
	int p,r,n,simple;
	printf("enter value of p");
	scanf("%d",&p);
	printf("enter value of r");
	scanf("%d",&r);
	printf("enter value of n");
	scanf("%d",&n);
	simple=p*r*n/100;
	printf("the simple intreset is =%d",simple);
	
	return 0;
}
