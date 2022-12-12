#include <stdio.h>
#define size 5
int main()
{
	double tab1[size]={0};
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
	printf("Podaj indeksy ktore chcesz podmienic\n");
	int index1,index2;
	double temp;
	scanf("%d %d", &index1,&index2);
	temp=tab1[index1];
	tab1[index1]=tab1[index2];
	tab1[index2]=temp;
	printf("Tablica po podmienieniu: \n");
	for(i=0; i<size; i++)
	{
		printf("tab1[%d] = %d\n", i, tab1[i]);
	}
	
	
	return 0;
}
