#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two nos.");
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		printf("The greatest no is %d", a);
	}
	else
	{
		printf("The greatest no is %d", b);
	}
}
