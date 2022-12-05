#include <stdio.h>
#include <math.h>

int main()
{
	int reps, sum=0, multiplier=9, i, j;
	scanf("%d", &reps);
	i=0;
	while(i<=reps)
	{
		sum=j*multiplier+sum;
		j=pow(10,i);
		i++;
	}
	
	printf("%d", sum);
}
