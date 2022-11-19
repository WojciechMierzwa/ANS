#include <stdio.h>

int main()
{
	int reps, number, sum=0, i;
	scanf("%d", &reps);
	for(i=0; i<reps; i++)
	{
		scanf("%d", &number);
		sum=sum+number;
	}
	
	printf("%d", sum);
}
