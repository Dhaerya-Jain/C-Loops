#include<stdio.h>
//
int main()
{
	int row,i,j,k=65,sum;
	printf("\nEnter the number of rows = ");
	scanf("%d",&row);
	
	for(i=0;i<row;i++)
	{
		sum=k+i;
		
		for(j=0;j<=i;j++)
		{
			printf("%c ",sum++);
		}
		printf("\n");
	}
	return 0;
}
