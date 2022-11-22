#include <stdio.h>
void check(unsigned int a, unsigned int b)
{
	printf("a: %u, b: %u\n", a,b);
		if(a&&b)
	printf("a&&b: true\n");
	else
	printf("a&&b: false\n");
	
	if(a||b)
	printf("a||b: true\n");
	else
	printf("a>=b: false\n");
	if(!a)
	printf("!a: true\n");
	else
	printf("!a: false\n");
	if(!b)
	printf("!b: true\n");
	else
	printf("!b: false\n");
	if(!a&&b || a&&!b)
	printf("!a&&b || a&&!b: true\n");
	else
	printf("!a&&b || a&&!b: false\n");
}
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


	check(a, b);
	check(0,0);
	check(0,1);
	check(1,0);
	check(1,1);
	
	return 0;
}
