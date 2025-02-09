#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two nos. ");
	scanf("%d %d", &a, &b);
	c=a;
	a=b;
	b=c;
	printf("The swapped nos. are ");
	printf("%d %d", a,b);
}
