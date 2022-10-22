#include <stdio.h>
#include <math.h>



int main()
{
	
	double a,b,c,x1,x2,delta;
	double imdelta, rootimdelta,realpart,impart1,impart2;
	int check=0;
	int flag=1;
    
    while(flag)
    { 
    	printf("Podaj a\n");
    	if(scanf("%lf", &a)!=1)
    	{
    		printf("Niedozwolony znak w a\n");
    		fflush(stdin);
    		
		}
		else
			flag=0;
    	
	}
	
	flag=1;
	
	while(flag)
    { 
    	printf("Podaj b\n");
    	if(scanf("%lf", &b)!=1)
    	{
    		printf("Niedozwolony znak w b\n");
    		fflush(stdin);
    		
		}
		else
			flag=0;
    	
	}
	
	flag=1;
	
	while(flag)
    { 
    	printf("Podaj c\n");
    	if(scanf("%lf", &c)!=1)
    	{
    		printf("Niedozwolony znak w c\n");
    		fflush(stdin);
    		
		}
		else
			flag=0;
    	
	}
	if(a==0 & b==0 & c!=0)
	{
		printf("Rownanie sprzeczne\n");
		check=1;
	}
	if(a==0 & b==0 & c==0)
	{
		printf("Rownanie tozsamosciowe");
		check=1;
	}
	if(a==0 & check==0)
	{
		printf("Rownanie liniowe\n");
		x1=c/b;
		printf("Rozwiazanie wynosi: %lf", x1);
	}
	if(a!=0)
	{
		delta=b*b-4*a*c;
		if(delta>0)
		{
			check=2;
			x1=(-b-sqrt(delta))/(2*a);
			x2=(-b+sqrt(delta))/(2*a);
			printf("Rownanie kwadratowe ma 2 rozwiazania x1=%lf",x1);
			printf(" i x2=%lf\n", x2);
		}
		if(delta==0)
		{
			check=2;
			x1=-b/(2*a);
			printf("Rownanie kwadratowe ma 1 rozwiazanie x=%lf\n", x1);
		}
		if(delta<0)
		{
			printf("Rownanie kwadratowe nie ma rozwiazan rzeczywistych\n");
		}
	}
	if(check==2 & delta>0)
	{
		printf("Rownanie dla rowiazania x1 rowna sie=%lf\n", a*x1*x1+b*x1+c);
		printf("Rownanie dla rowiazania x2 rowna sie=%lf\n", a*x2*x2+b*x2+c);
	}
	if(check==2 & delta==0)
	{
		printf("Rownanie dla rowiazania x rowna sie=%lf\n", a*x1*x1+b*x1+c);
	}
	
	if(delta<0)
	{
		imdelta=abs(delta);
		rootimdelta=sqrt(imdelta);
		realpart=-b/(2*a);
		impart1=rootimdelta/(2*a);
		impart2=-impart1;
		printf("Pierwiastek x1 wynosi x1=%lf", realpart);
		printf(" + %lf", impart1);
		printf("j\n");
		
		printf("Pierwiastek x1 wynosi x2=%lf", realpart);
		printf(" + %lf", impart2);
		printf("j\n");
		
		
	}
   
	
   
	
	return 0;
}
