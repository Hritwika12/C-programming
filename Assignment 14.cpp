#include<stdio.h>
#include<math.h>
int main()
{
	float a,fl,cl;
	printf("Enter a number");
	scanf("%f", &a);
	fl= floor(a);
	cl= ceil(a);
	printf("The floor value is  ");
	printf("%f", fl);
	printf("The ceiling value is");
	printf("%f", cl);
}
