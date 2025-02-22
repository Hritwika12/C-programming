#include<stdio.h>
int main()
{
	int i,s=0;
	for(i=1;i<20;i=i+2)
	{
		s=s+i;
	}
	printf("The sum is %d", s);
}
