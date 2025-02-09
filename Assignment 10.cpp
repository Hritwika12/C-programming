#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two nos. ");
	scanf("%d %d", &a, &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The swapped nos. are ");
	printf("%d %d", a,b);
}
