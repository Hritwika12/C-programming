#include<stdio.h>
int main() 
{
	int arr[100];
	int n, i;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	printf("Enter the elements of the array: ");
	for (i=0; i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Array in reverse order: ");
	for(i=n-1;i>=0;i--)
	{
		printf(" %d", arr[i]);
	}
	printf("\n");
	return 0;
}

