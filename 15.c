#include<stdio.h>
//Printing Pyramid of Numbers using Loops::
/*
 1
 2  3
 4  5  6
 7  8  9 10
11 12 13 14 15
*/
int main()
{
	int row,i,j,k=1;
	printf("\nEnter number of rows = ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		int temp=i;
		for(j=1;j<=i;j++)
		{
			printf("%2d ",k++);
		}
		printf("\n");
	}
	return 0;
}
