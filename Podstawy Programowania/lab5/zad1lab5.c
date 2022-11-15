#include <stdio.h>

int main()
{
	int row, number;
	scanf("%d", &row);
	scanf("%d", &number);
	int i,j;
	for(i=0; i<row; i++)
	{
		for(j=0; j<number; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
