#include<stdio.h>
//To check whether the Number is a Perfect number or not using loops::
int main()
{
	int num,sum=0,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum = sum + i;
		}
	}
	if(sum==num)
	{
		printf("\nEntered number is a Perfect number.");
	}
	else
	{
		printf("\nEntered number is not a Perfect number.");
	}
	return 0;
}
