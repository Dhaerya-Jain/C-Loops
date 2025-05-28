#include<stdio.h>
//Printing Pyramid of '*' using Loops::
int main()
{
	int row,i,j;
	printf("\nEnter number of rows = ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ",row);
		}
		printf("\n");
	}
	return 0;
}
