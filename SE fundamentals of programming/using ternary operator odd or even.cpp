// WAP to find number is even or odd using ternary operator.
#include<stdio.h>
int main()
{
	int a;
	printf("enter number for check number is even or odd : ");
	scanf("%d",&a);
	if (a % 2 == 0)
	printf("%d is even",a);
	else
	printf("%d is odd",a);
	return 0;
}
