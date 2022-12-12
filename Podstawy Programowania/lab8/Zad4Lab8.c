#include <stdio.h>

int main(){
	double array[8]={0};
	int i;
	int flag;
	for(i=0; i<8; i++)
	{
		 while(flag)
    { 
    	printf("Podaj array[%d]\n", i);
    	if(scanf("%lf", &array[i])!=1)
    	{
    		printf("Niedozwolony znak w array[%d]\n", i);
    		fflush(stdin);	
		}
		else
			flag=0;	
	}
	flag=1;
	}
	

	double sumad=0;
	double sumau=0;
	for(i=0; i<8; i++)
	{
		if(array[i]>=0)
		sumad+=array[i];
		else
		sumau+=array[i];
	}
	printf("Suma elementow dodatnich = %lf \n", sumad);
	printf("Suma elementow nieparzystych = %lf \n", sumau);
	
	//b
	printf("Sumowanie przedzia³u wartosci argumetow:\n");
	
	int a1,b1;
	while(flag)
    { 
    	printf("Podaj b\n");
    	if(scanf("%d", &b1)!=1)
    	{
    		printf("Niedozwolony znak w b\n");
		}
		else
			flag=0;	
	}
	flag=1;

	
	while(flag)
    { 
    	printf("Podaj a\n");
    	if(scanf("%d", &a1)!=1)
    	{
    		printf("Niedozwolony znak w a\n");
		}
		else if(a1>b1)
		{
			printf("a nie moze byc wieksze od b\n");
		}
		else
			flag=0;	
	}
	flag=1;
	double sum=0;
	for(i=0; i<8; i++)
	{
		if(array[i]>=a1 && array[i]<=b1)
		sum=sum+array[i];
	}
	printf("Suma dla przedzialu wartosci argumentow wynosi %lf\n", sum);
	
	//c
	printf("Sumowanie przedzia³u:\n");
	int a,b;
	while(flag)
    { 
    	printf("Podaj ind2\n");
    	if(scanf("%d", &b)!=1)
    	{
    		printf("Niedozwolony znak w b\n");
		}
		else if(b>7 || b<0)
		{
			printf("Wykracza poza zakres tablicy\n");
		}
		else
			flag=0;	
	}
	flag=1;

	
	while(flag)
    { 
    	printf("Podaj ind1\n");
    	if(scanf("%d", &a)!=1)
    	{
    		printf("Niedozwolony znak w a\n");
		}
		else if(a>b || a<0)
		{
			printf("Wykracza poza zakres tablicy\n");
		}
		else
			flag=0;	
	}
	flag=1;
	double sumaprzedzial=0;
	for(i=a; i<=b; i++)
	{
		sumaprzedzial=sumaprzedzial+array[i];
	}
	printf("Suma przedzialu %lf\n", sumaprzedzial); 
	return 0;
}
