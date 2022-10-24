#include <stdio.h>
#include <math.h>
#include <complex.h>



int main()
{
	
	double a,b,c,x1,x2,delta, imdelta, realpart, impart1, impart2, rootimdelta;
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
		x1=-c/b;
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
/*	double complex z1=;
	double complex z2;
	
    printf("z1 = %.1f%+.1fi\n", creal(z1), cimag(z1));
	
	printf("Rownanie kwadratowe ma 2 rozwiazania z zbiorze liczb urojonych z1 = %.1f%+.1fi\n", creal(z1), cimag(z1));
	printf(" z2 = %.1f%+.1fi\n", creal(z2), cimag(z2));
	
	printf("Rownanie dla rowiazania z1 rowna sie=%lf\n", a*z1*z1+b*z1+c);
	printf("Rownanie dla rowiazania z2 rowna sie=%lf\n", a*z2*z2+b*z2+c);*/
	
	imdelta=abs(delta);
	rootimdelta=sqrt(imdelta);
	realpart=-b/(2*a);
	impart1=rootimdelta/(2*a);
	impart2=-impart1;
	
	double complex z1=realpart+impart1*I;
	double complex z2=realpart+impart2*I;
	
	printf("Rownanie kwadratowe ma 2 rozwiazania z zbiorze liczb urojonych z1 = %f%+fi", creal(z1), cimag(z1));
	printf(" i z2 = %f%+fi\n", creal(z2), cimag(z2));
	printf("Rownanie dla rowiazania z1 rowna sie=%lf\n", a*z1*z1+b*z1+c);
	printf("Rownanie dla rowiazania z2 rowna sie=%lf\n", a*z2*z2+b*z2+c);
	printf("Wartosc rzeczywista obu pierwiastkow wynosi =%lf\n", realpart);
	printf("Wartosc urojona dla pierwiastka z1 =%lf\n", impart1);
	printf("Wartosc urojona dla pierwiastka z2 =%lf\n", impart2);

	
	
	
	/*printf("Pierwiastek x1 wynosi x1=%lf", realpart);
		printf(" + %lf", impart1);
		printf("j\n");
		
		printf("Pierwiastek x1 wynosi x2=%lf", realpart);
		printf(" + %lf", impart2);
		printf("j\n");
	
		*/
		
	}
   
	
   
	
	return 0;
}
