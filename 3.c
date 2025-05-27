#include<stdio.h>
//To check weather the number is prime or not using loops::
int main()
{
	int i,num,flag=1;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		printf("%d is a prime number.",num);
	}
	else
	{
		printf("%d is not a prime number.",num);
	}
	return 0;
}
