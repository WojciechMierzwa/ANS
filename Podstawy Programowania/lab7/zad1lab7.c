#include <stdio.h>

int check(int number)
{
	while(1)
    { 
    	printf("Podaj liczbe\n");
    	if(scanf("%d",&number)!=1 || number<1)
    	{
    		printf("Prosze podac liczbe\n");
    		fflush(stdin);
    		
		}
		else
			return number;
    	
	}
}

int main()
{
	int number, i;
	
	number=check(number);
	for(i=1; i<=number; i++)
	{
		if(number%i==0)
		{
			printf("%d x %d = %d\n", i, number/i, number);
		}
		
	}
	return 0;
}
