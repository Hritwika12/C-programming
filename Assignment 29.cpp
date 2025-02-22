#include<stdio.h>
int main()
{
	int a=0,b=1,s=0,i,n;
	printf("Enter the n term ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("%d  ", a);
		s=a+b;
		a=b;
		b=s;
	}
}
