#include <stdio.h>

int check(int number, char *n)
{
	while(1)
    { 
    	printf("Podaj %s:\n", n);
    	if(scanf("%d",&number)!=1)
    	{
    		printf("Prosze podac liczbe\n");
    		fflush(stdin);
    		
		}
		else if(n<0)
		{
			printf("Prosze podac liczbe wieksza od 0 \n");
    		fflush(stdin);
		}
		else
			return number;
	}
}
int main()
{
	int n,i, factorial;
	n=check(n,"n");
	for(i=1; i<=n; i++)
	{
		factorial*=i;
	}
	printf("Silnia wynosi: %d\n", factorial);
	i=1;
	factorial=1;
	while(i<=n)
	{
		factorial*=i;
		i++;
	}
	printf("Silnia wynosi: %d", factorial);

}
