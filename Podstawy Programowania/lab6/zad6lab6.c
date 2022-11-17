#include <stdio.h>

int main()
{
	int row,col,i,j,temp;
	printf("Podaj ilosc wierszy\n");
	scanf("%d", &row);
	printf("Podaj ilosc kolumn\n");
	scanf("%d", &col);
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			temp=(j+i)%2;
			if(temp==0)
			printf("x");
			else
			printf("y");
		}
		printf("\n");
	}
	//triangle
	printf("\n\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<=i; j++)
		{
			if(j==0 && i==0)
			printf("x");
			else if(j<i)
			printf("x");
			else
			printf("y");
		}
		printf("\n");
	}
	return 0;
}
