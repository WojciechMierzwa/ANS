#include <stdio.h>

int main()
{
	unsigned int a,b;


	while(1)
    { 
    	printf("Podaj a:\n");
    	if(scanf("%u",&a)!=1)
    	{
    		printf("Prosze podac liczbe\n");
    		fflush(stdin);
    		
		}
		else
			break;
    	
	}
		while(1)
    { 
    	printf("Podaj b:\n");
    	if(scanf("%u",&b)!=1)
    	{
    		printf("Prosze podac liczbe\n");
    		fflush(stdin);
    		
		}
		else
			break;
    	
	}


	if(a>b)
	printf("a>b: true\n");
	else
	printf("a>b: false\n");
	
	if(a>=b)
	printf("a>=b: true\n");
	else
	printf("a>=b: false\n");
	if(a<b)
	printf("a<b: true\n");
	else
	printf("a<b: false\n");
	if(a<=b)
	printf("a<=b: true\n");
	else
	printf("a<=b: false\n");
	if(a==b)
	printf("a==b: true\n");
	else
	printf("a==b: false\n");
	if(a!=b)
	printf("a!=b: true\n");
	else
	printf("a!=b: false\n");
	
	return 0;
}
