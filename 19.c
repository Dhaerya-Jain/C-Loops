#include<stdio.h>
/*
A
B C
D E F
G H I J
K L M N O
*/
int main()
{
	int row,i,j,k=65;
	printf("\nEnter the number of rows = ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",k++);
		}
		printf("\n");
	}
	return 0;
}
