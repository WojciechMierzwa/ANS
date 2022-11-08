#include <stdio.h>

int main()
{
	int n, n1,div=1000, flag=1;
	
	while(flag)
	    	{
	    		printf("Podaj n\n");
	    		if(scanf("%d",&n)!=1)
		    	{
		    		printf("n musi byc liczba\n");
		    		fflush(stdin);
		    		
				}
				else if(!(n>=0 & n<=9999))
				printf("Liczba musi byc z zakresu od 0 do 9999\n");
				else
				flag=0;
			}
			printf("Cyfry liczby %d to: ", n);
			flag=0;
			while(n)
			{

				n1=n/div;
				n1=n1%10;
				div=div/10;
				if(n1!=0)
				flag=1;
				if(flag ==1)
				printf("\n%d", n1);
			}
	
	return 0;
}
