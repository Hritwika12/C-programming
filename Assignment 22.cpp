#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character T for tail and H for head");
	scanf("%c", &ch);
	if(ch == 72)
	printf("Head");
	else if(ch == 84)
	printf("Tail");
	else
	printf("Character is not right");
}
