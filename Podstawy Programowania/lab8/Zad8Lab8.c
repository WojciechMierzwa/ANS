#include <stdio.h>
#define size 5
int main()
{
	int tab1[size]={0};
	int i;
	for( i=0; i<size; i++)
	{
		scanf("%d", &tab1[i]);
	}
	printf("Tablica 1:\n");
	
	for(i=0; i<size; i++)
	{
		printf("tab1[%d] = %d\n", i, tab1[i]);
		
	}
	int max=tab1[0],min=tab1[0];
	for(i=0; i<size; i++)
	{
		if(max<tab1[i])
		max=tab1[i];
		if(min>tab1[i])
		min=tab1[i];
	}
	printf("Wartosc min = %d\n", min);
	printf("Wartosc max = %d\n", max);

	
	
	return 0;
}
