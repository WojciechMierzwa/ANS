#include <stdio.h>

int main(){
	int array[6];
	int i;
	int flag;
	for(i=0; i<6; i++)
	{
		 while(flag)
    { 
    	printf("Podaj array[%d]\n", i);
    	if(scanf("%d", &array[i])!=1)
    	{
    		printf("Niedozwolony znak w array[%d]\n", i);
    		fflush(stdin);	
		}
		else
			flag=0;	
	}
	flag=1;
	}
	

	int sumap=0;
	int suman=0;
	for(i=0; i<6; i+=2)
	{
		sumap+=array[i];
		suman+=array[i+1];
	}
	printf("Suma elementow parzystych = %d \n", sumap);
	printf("Suma elementow nieparzystych = %d \n", suman);
	return 0;
}
