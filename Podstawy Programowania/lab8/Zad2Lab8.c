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
    	if(scanf("%lf", &array[i])!=1)
    	{
    		printf("Niedozwolony znak w array[%d]\n", i);
    		fflush(stdin);
    		
		}
		else
			flag=0;
    	
	}
	
	flag=1;
	
	}
	return 0;
}
