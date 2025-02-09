#include<stdio.h>
int main()
{
	int l,b,area,perimeter;
	printf("Enter the length and breadth");
	scanf("%d %d", &l, &b);
	area= l*b;
	perimeter= 2*(l+b);
	printf("The area and perimeter is");
	printf("%d %d", area, perimeter);
}
