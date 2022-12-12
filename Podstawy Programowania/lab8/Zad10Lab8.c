#include <stdio.h>
#define size 5
int main()
{
	int tab1[size]={0};
	int tab2[size]={0};
	int i;
	printf("Podaj tab1\n");
	for( i=0; i<size; i++)
	{
		scanf("%d", &tab1[i]);
	}
	printf("Podaj tab2\n");
	for( i=0; i<size; i++)
	{
		scanf("%d", &tab2[i]);
	}
	printf("Tablica 1:\n");
	
	for(i=0; i<size; i++)
	{
		printf("tab1[%d] = %d\n", i, tab1[i]);
		
	}
	
	printf("Tablica 2:\n");
	
	for(i=0; i<size; i++)
	{
		printf("tab2[%d] = %d\n", i, tab2[i]);
		
	}
	
	printf("Podmiana elementow\n");
	int temp;
	for(i=0; i<size; i++)
	{
		temp=tab1[i];
		tab1[i]=tab2[i];
		tab2[i]=temp;
	}
		printf("Tablica 1:\n");
	
	for(i=0; i<size; i++)
	{
		printf("tab1[%d] = %d\n", i, tab1[i]);
		
	}
	
	printf("Tablica 2:\n");
	
	for(i=0; i<size; i++)
	{
		printf("tab2[%d] = %d\n", i, tab2[i]);
		
	}
	
	
	return 0;
}
