#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	if (num % 2 == 0)
		printf("\n%d is an even number.",num);
	else 
		printf("\n3%d is not an even number",num);
	return 0;
}
