#include <stdio.h>

int main()
{
	int n, i, sumn=1;
	double sum=1;
	
	printf("Podaj n:\n");
	scanf("%d", &n);
	printf("1 +");
	for(i=2; i<n; i++)
	{
		printf(" 1/%d +", i);
		sumn=sumn+i;
	}
	printf(" 1/%d\n", n);
	sumn=sumn+i;
	printf("Suma n skladnikow: %d", sumn);
	
	return 0;
}
