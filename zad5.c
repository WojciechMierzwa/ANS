#include <stdio.h>

int main()
{
	int n, n1, flag=1;
	
	while(flag)
	    	{
	    		printf("Podaj n\n");
	    		if(scanf("%d",&n)!=1)
		    	{
		    		printf("n musi byc liczba\n");
		    		fflush(stdin);
		    		
				}
				else if(!(n>=0 & n<=99999))
				printf("Liczba musi byc z zakresu od 0 do 99999\n");
				else
				flag=0;
			}
			printf("Cyfry liczby %d to: ", n);
			while(n)
			{
				n1=n%10;
				n=n/10;
				printf("\n%d", n1);
			}
	
	return 0;
}
