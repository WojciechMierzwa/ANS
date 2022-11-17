#include <stdio.h>

int main()
{
	double tempCelsjusz;
	int tempFahrenheit=20;
	
	
	printf("Celsjusz    Fahrenheit\n");
	while(tempFahrenheit<=300)
	{
		tempCelsjusz=5*(tempFahrenheit-32)/9;
		printf("%lf        %d",tempCelsjusz,tempFahrenheit);
		tempFahrenheit++;
		printf("\n");
	}
	return 0;
}
