#include<stdio.h>
//To check whether a number is pallindrome or not using loops::
int main()
{
	int num,rev=0;
	printf("\nEnter any number = ");
	scanf("%d",&num);
	int temp=num;
	
	while(num!=0)
	{
		int rem = num%10;
		rev = (rev*10) + rem;
		num = num/10;
	}
	if(rev==temp)
	{
		printf("\nThe entered number is a Pallindrome number.");
	}
	else
	{
		printf("\nThe entered number is not a Pallindrome number.");
	}
	return 0;
}
