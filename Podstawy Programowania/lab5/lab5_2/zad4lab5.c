#include <stdio.h>

int main()
{
	unsigned int n, n1,div=10000, flag=1,n2;
	
	
	while(flag)
	    	{
	    		printf("Podaj n\n");
	    		if(scanf("%u",&n)!=1)
		    	{
		    		printf("n musi byc liczba\n");
		    		fflush(stdin);
		    		
				}
				else
				flag=0;
			}
			printf("Cyfry liczby %d to: ", n);
			flag=0;
			n2=n;
			while(n2)
			{
				n2=n2/10;
			}
			while(n)
			{

				n1=n/div;
				n1=n1%10;
				div=div/10;
				if(n1!=0)
				flag=1;
				if(flag ==1)
				printf("\n%u", n1);
			}
	
	return 0;
}
