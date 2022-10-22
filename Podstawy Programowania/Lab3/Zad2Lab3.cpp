#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	
	double x;
	int k,l;
	
	do
	{
		printf("\n Podaj x:");
		k=scanf("%lf", &x);
		if (k==0)
		printf("\n Blad formatu");
		while( getchar()!='\n');
	}
	while(k==0);
	printf("\n x=%f", x);
	getchar();
	return 0;
}
