#include<stdio.h>
//Printing Shapes and Figures using Loops::
int main()
{
	int row,col,i,j;
	printf("\nEnter number of rows = ");
	scanf("%d",&row);
	printf("\nEnter number of columns = ");
	scanf("%d",&col);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
