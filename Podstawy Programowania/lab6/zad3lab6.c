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
		else
			return number;
	}
}
int main()
{
	int tempPocz,tempKon,delta;
	double tempCelsjusz;
	
	tempPocz=check(tempPocz, "temperature poczatkowa");
	tempKon=check(tempKon, "temperature koncowa");
	while(tempKon<=tempPocz)
	{
		printf("Oszalales? Temperatura koncowa musi byc wieksza\n");
		tempKon=check(tempKon, "temperature koncowa");
	}

	delta=check(delta, "delta");
	while(delta<=0)
	{
		printf("Delta ma byc nieujemna\n");
		delta=check(delta, "delta");
	}
	printf("Celsjusz    Fahrenheit\n");
	while(tempPocz<=tempKon)
	{
		tempCelsjusz=5*(tempPocz-32)/9;
		printf("%lf        %d",tempCelsjusz,tempPocz);
		tempPocz+=delta;
		printf("\n");
	}
	
	return 0;
}
