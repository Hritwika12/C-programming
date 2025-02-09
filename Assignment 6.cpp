#include<stdio.h>
int main()
{
	int p, r, t;
	printf("Enter the principle rate and time ");
	scanf("%d %d %d", &p, &r, &t);
	float si;
	si=(p*r*t)/100;
	printf("The simple interest is");
	printf("%f", si);
}
