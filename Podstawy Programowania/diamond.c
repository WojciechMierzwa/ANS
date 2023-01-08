#include <stdio.h>

int main()
{
	int n,s=0;
	scanf("%d", &n);
	
	int i,j,k;
	for(i=0; i<n; i++)
	{
		for(j=0+i; j<n; j++)
		{
			printf(" ");
			s=s+2;
		}
		printf("/");
		for(k=s; s<2*n; s++)
		{
			printf(" ");
		}
		s=0;
		printf("\\\n");
	}
	s=0;
		for(i=0; i<n; i++)
	{
		printf(" ");
		for(k=0; k<i; k++)
		{
			printf(" ");
		}
		printf("\\");
		for(k=0; k<2*n-2*s-2; k++)
		{
			printf(" ");
		}
		s++;
		printf("/");
		printf("\n");
	}

	return 0;
}
