#include <stdio.h>
#define size 5
int main()
{
	int tab1[size]={0};
	int tab2[size]={0};
	int i;
	for( i=0; i<size; i++)
	{
		scanf("%d", &tab1[i]);
		tab2[size-1-i]=tab1[i];
	}
	printf("Tablica 1:\n");
	
	for(i=0; i<size; i++)
	{
		printf("tab1[%d] = %d\n", i, tab1[i]);
		tab1[i]=tab2[i];
		
	}
	printf("Tablica 1 po odwroceniu elemntow:\n");
	
	for(i=0; i<size; i++)
	{
		printf("tab1[%d] = %d\n", i, tab1[i]);
		
	}
	
	
	
	return 0;
}
