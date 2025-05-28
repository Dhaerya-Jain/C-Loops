#include<stdio.h>
//Printing Pyramid of Numbers using Loops::
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
int main()
{
	int row,i,j;
	printf("\nEnter number of rows = ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
