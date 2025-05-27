#include<stdio.h>
//Finding the factorials of a particular number using loops::
int main()
{
	int i,num,fact=1;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("\n The factorial of %d is equal to %d",num,fact);
	return 0;
}
