#include <stdio.h>

int main(){
	
	double aktWyn, wynPodw, kwotaWyr;
	int aktMiesiac, miesiacPodwWyn;
	
	
	int flag=1;
    
    while(flag)
    { 
    	printf("Podaj aktualna pensje pracownika\n");
    	if(scanf("%lf",&aktWyn)!=1)
    	{
    		printf("Pensja musi byc liczba\n");
    		fflush(stdin);
    		
		}
		else if(aktWyn<0)
		printf("Pensja nie moze byc ujemna, prosze podac prawdziwa wartosc\n");
		else
			flag=0;
    	
	}
	
	flag=1;
	
	while(flag)
    { 
    	printf("Podaj aktualny miesiac\n");
    	if(scanf("%d",&aktMiesiac)!=1)
    	{
    		printf("Miesiac musi byc liczba\n");
    		fflush(stdin);
    		
		}
		else if(!(aktMiesiac>0 & aktMiesiac<13))
		printf("Miesiac musi byc w zakresie od 1 do 12\n");
		else
			flag=0;
    	
	}
	
	flag=1;
	
	while(flag)
    { 
    	printf("Podaj miesiac, od ktorego obowiazuje podwyzka\n");
    	if(scanf("%d",&miesiacPodwWyn)!=1)
    	{
    		printf("Miesiac musi byc liczba\n");
    		fflush(stdin);
    		
		}
		else if(!(miesiacPodwWyn>0 & miesiacPodwWyn<13))
		printf("Miesiac musi byc w zakresie od 1 do 12\n");
		else
			flag=0;
    	
	}
	if(aktMiesiac>=miesiacPodwWyn)
	{
		wynPodw=aktWyn+aktWyn*0.076;
		kwotaWyr=wynPodw-aktWyn;
		
	}
	else
	{
		wynPodw=aktWyn;
		kwotaWyr=0;
	}
	printf("Aktualna pensja wynosi:%lf\n", wynPodw);
	printf("Kwota wyrowniania wynosi:%lf", kwotaWyr);
	
	
	return 0;
}
