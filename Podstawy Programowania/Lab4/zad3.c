#include <stdio.h>
#include <stdlib.h>

int calc()
{
	int flag=1;
	double x,y,z,v,x3, d;
	
	
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
			return 1;
		 }
		 if (x==0 & y==0)
		 {
			printf("\n 1/0, dzielenie przez 0");
			return 2;
		 }
		 if(x3==y)
		 {
		 	printf("\n %lf/0, dzielenie przez 0", y);
			return 3;
		 }
		 if(d==0)
		 {
		 	printf("\ndzielenie przez 0");
			exit(4);
		 }
		 
	
	v=1/(y/(z-5)+x/(x+y/(y-x3)));
	printf("V wynosi %lf", v);	
	int choice;
	printf("Kontynuowac? Jesli tak wpisz 1, cokolwiek innego konczy program\n");
	scanf("%d", &choice);
	if(choice==1)
	return 1;
	else
	{
		return 0;
	}
}
int main()
{
	int choice=1;
	do
	{
		choice=calc();
		if(choice==0)
		break;
	}
	while(choice);
	return 0;
}
