#include <stdio.h>

int check(int number, char n)
{
	while(1)
    { 
    	printf("Podaj %c:\n", n);
    	if(scanf("%d",&number)!=1)
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
	int n, a, i, sum=0;
    n=check(n, 'n');
	for(i=0; i<n; i++)
	{
		a=check(a,'a'); 	
		sum=sum+a;
	}
	printf("Suma wynosi %d",sum);
	return 0;
}
