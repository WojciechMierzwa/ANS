#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,flag=1;
	double x,y,z,v,x3, d;
	
	
		while(flag)
    { 
    	printf("Podaj ile razy ma sie wykonac petla\n");
    	if(scanf("%d",&n)!=1)
    	{
    		printf("To musi byc liczba\n");
    		fflush(stdin);
    		
		}
		else
			flag=0;
    	
	}
	
	

	
	while(n)
	{
		flag=1;
		
		while(flag)
	    { 
	    	printf("Podaj x\n");
	    	if(scanf("%lf",&x)!=1)
	    	{
	    		printf("x musi byc liczba\n");
	    		fflush(stdin);
	    		
			}
			else
				flag=0;
	    	
		}
		
		flag=1;
		
		while(flag)
	    { 
	    	printf("Podaj y\n");
	    	if(scanf("%lf",&y)!=1)
	    	{
	    		printf("y musi byc liczba\n");
	    		fflush(stdin);
	    		
			}
			else
				flag=0;
	    	
		}
		
		flag=1;
		
		while(flag)
	    { 
	    	printf("Podaj z\n");
	    	if(scanf("%lf",&z)!=1)
	    	{
	    		printf("z musi byc liczba\n");
	    		fflush(stdin);
	    		
			}
			else
				flag=0;
	    	
		}
		
		x3=x*x*x;
		
		if(x<0)
		x3=-x*x*x;
		d=y/(z-5)+x/(x+y/(y-x3));
		if (z==5)
		 {
			printf("\n z-5==0, dzielenie przez 0");
			n--;
			continue;
		 }
		 if (x==0 & y==0)
		 {
			printf("\n 1/0, dzielenie przez 0");
			n--;
			continue;
		 }
		 if(x3==y)
		 {
		 	printf("\n %lf/0, dzielenie przez 0", y);
		 	n--;
			continue;
		 }
		 if(d==0)
		 {
		 	printf("\ndzielenie przez 0");
		 	n--;
			continue;
		 }
		 else
		 {
		 	v=1/(y/(z-5)+x/(x+y/(y-x3)));
			printf("V wynosi %lf\n", v);
		 	n--;
		 	continue;
		 }
		 
		 
	}
	
	
	return 0;
}
