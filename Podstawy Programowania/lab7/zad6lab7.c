#include <stdio.h>
#include <math.h>

void a(double x, int n)
{
	int i;
	int silnia=1;
	double wynik=0;
	double wynik2=exp(x);
	for(i=0; i<=n; i++)
	{
		if(i!=0)
		silnia=silnia*i;
		wynik=wynik+((pow(x,i))/silnia);
	}
	printf("Dla n= %d suma wynosi: %lf\n",n,wynik);
	printf("(e^x) Dla n= %d suma wynosi: %lf\n",n,wynik2);
	printf("Roznica: %lf\n", wynik2-wynik);
}
void b(double x, int n)
{
	int silnia=1;
	int i,j;
	double wynik=0;
	double wynik2=sin(x);
	for(i=0; i<=n; i++)
	{
			for(j=1; j<=2*i+1; j++)
			{
				silnia=silnia*j;
			}
		printf("%d\n", silnia);
		if(i%2)
		wynik=wynik-(pow(x,(2*i+1))/silnia);
		else
		wynik=wynik+(pow(x,(2*i+1))/silnia);
		silnia=1;
		
	}
	printf("Dla n= %d suma wynosi: %lf\n",n,wynik);
	printf("(sinx) Dla n= %d suma wynosi: %lf\n",n,wynik2);
	printf("Roznica: %lf\n", wynik2-wynik);	
	silnia=1;
}



int main(){
	
	double x;
	scanf("%lf", &x);
	int i;
	
	printf("Podpunkt a\n");
	for(i=5; i<=8; i++)
	{
		a(x,i);
	}
	printf("\nPodpunkt b\n");
	for(i=4; i<=6; i++)
	{
		b(x,i);
	}
	
	return 0;
}
