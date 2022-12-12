#include <stdio.h>
#define size 10
int main()
{
	int tab1[size]={0};
	int tab2[size/2]={0};
	int i;
	for( i=0; i<size; i++)
	{
		scanf("%d", &tab1[i]);
		if(i%2==0)
		tab2[i/2]=tab1[i];
	}
	printf("Tablica 1:\n");
	for(i=0; i<size; i++)
	{
		printf("tab1[%d] = %d\n", i, tab1[i]);
	}
	printf("Tablica 2:\n");
	for(i=0; i<size/2; i++)
	{
		printf("tab2[%d] = %d\n", i, tab2[i]);
	}
	
	return 0;
}
