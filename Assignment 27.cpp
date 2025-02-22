#include<stdio.h>
int main()
{
	int i,n,s=0;
	for(i=1;i<=10;i++)
	{
		n=i*i;
		s=s+n;
	}
	printf("The sum is %d", s);
}
