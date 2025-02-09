#include<stdio.h>
int main()
{
	int a,c;
	printf("Enter a no.");
	scanf("%d", &a);
	c=a-(a/10)*10;
	printf("The last digit is %d", c);
}
