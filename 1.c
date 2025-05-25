#include<stdio.h>
//While, For and Do-While Loops::
int main()
{
	int i;
	printf("\nFor Loop :-");
	for(i=10;i<=5;i++)
	{
		printf("\nTops Technologies");
	}
	
	printf("\nWhile Loop :-");
	i=10;
	while(i<=5)
	{
		printf("\nTops Technologies");
		printf("\nBye");
		i++;
	}
	printf("\nDo while loop :- ");
    i = 10;
    do
    {
        printf("\nTops Technologies");
        printf("\nBye");
        i++;
    }while(i<=5);
	return 0;
}
