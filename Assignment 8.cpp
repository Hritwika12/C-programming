#include<stdio.h>
int main()
{
	float c1, c2,f1,f2;
	printf("Enter the celcius and fahrenheit temperature ");
	scanf("%f %f", &c1, &f2);
	f1=(c1*1.8)+32;
	c2= (f2-32)*5/9;
	printf("The converted temperatures are");
	printf("%f %f", f1, c2);
}
