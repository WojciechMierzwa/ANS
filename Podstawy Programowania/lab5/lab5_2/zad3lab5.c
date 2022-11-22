#include <stdio.h>
void check(unsigned int x, unsigned int y, unsigned int z)
{
	printf("x: %u, y: %u, z: %u\n", x,y,z);
	if(x&&y||z)
	{
		printf("x&&y||z: true\n");
	}
	else
	printf("x&&y||z false\n");
}
int main()
{
		unsigned int x,y,z;


	while(1)
    { 
    	printf("Podaj x:\n");
    	if((scanf("%u",&x)!=1))
    	{
    		printf("Prosze podac liczbe\n");
    		fflush(stdin);
    		
		}
		else if(x<0 || x>1)
		{
			printf("Prosze podac liczbe 0,1\n");
		}
		else
			break;
    	
	}
		while(1)
    { 
    	printf("Podaj y:\n");
    	if((scanf("%u",&y)!=1) )
    	{
    		printf("Prosze podac liczbe\n");
    		fflush(stdin);
    		
		}
		else if(y<0 || y>1)
		{
			printf("Prosze podac liczbe 0,1\n");
		}
		else
			break;
    	
	}
	while(1)
    { 
    	printf("Podaj z:\n");
    	if((scanf("%u",&z)!=1))
    	{
    		printf("Prosze podac liczbe\n");
    		fflush(stdin);
    		
		}
			else if(z<0 || z>1)
		{
			printf("Prosze podac liczbe 0,1\n");
		}
		else
			break;
    	
	}
	check(x,y,z);
	printf("wszystkie kombinacje:\n");
	check(0,0,0);
	check(0,0,1);
	check(0,1,0);
	check(0,1,1);
	check(1,0,0);
	check(1,0,1);
	check(1,1,0);
	check(1,1,1);
	
	

	
	
	return 0;
}
