#include <stdio.h>

int n;
double number;

int main() {
    printf("Podaj ilosc liczb:\n");
    scanf("%d", &n);
    
    double sump=0;
	double sumn=0;
	int counter0=0;
	int counter=0;

    do
    {
    	if(number==0)
    	break;
    	printf("Podaj liczbe:\n");
    	scanf("%lf", &number);
    	
    	if(number>0)
    	{
    		sump=sump+number;
		}
		if(number<0)
		{
			sumn=sumn+number;
		}
		if(number==0)
		{
			counter0++;
		}
		counter++;
	}
	while(counter<n);
	
	printf("Suma liczb dodatnich: %lf\n", sump);
	printf("Suma liczb ujemnych : %lf\n", sumn);
	printf("Tyle razy pojawilo sie zero: %d\n", counter0);

    return 0;
}
