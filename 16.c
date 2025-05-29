#include<stdio.h>
/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
int main()
{
	int row,i,j;
	printf("\nEnter the number of rows = ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}
	return 0;
}
