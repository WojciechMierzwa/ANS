#include <stdio.h>
#include <math.h>

int main() {
    double przychod,kosztaUzyskania, dochod, skladkaZUS,dochodPoOd1ZUS,skladkaZdrow,zaliczkaPodatek,podatekNalezny,podatekNaleznyZaokr,podatekDoZaplaty,nadplata,podatekMinusSkladZdrow;
    
	int flag=1;
    
    while(flag)
    { 
    	printf("Podaj przychod\n");
    	if(scanf("%lf", &przychod)!=1)
    	{
    		printf("Niedozwolony znak w przychodzie\n");
    		fflush(stdin);
    		
		}
		else if(przychod<0)
		printf("Przychod nie moze byc ujemny\n");
		else
			flag=0;
    	
	}
	
	flag=1;
	

   
    
    while(flag)
    { 
    	printf("Podaj koszta uzyskania\n");
    	if(scanf("%lf", &kosztaUzyskania)!=1)
    	{
    		printf("Niedozwolony znak w kosztach uzyskania\n");
    		fflush(stdin);
    		
		}
		else if(kosztaUzyskania<0)
		printf("Koszta uzyskania nie moga byc ujemne\n");
		else
			flag=0;	
	}
	
	flag=1;

    dochod=przychod-kosztaUzyskania; //c
    printf("Dochod wynosi: %lf\n", dochod);

    
    while(flag)
    { 
    	printf("Podaj koszta ubezpieczenia spolecznego ZUS\n");
    	if(scanf("%lf", &skladkaZUS)!=1)
    	{
    		printf("Niedozwolony znak w skladce ubezpieczenia spolecznego ZUS\n");
    		fflush(stdin);
    		
		}
		else if(skladkaZUS<0)
		printf("Skladka ubezpieczenia spolecznego ZUS nie moze byc ujemna\n");
		else
			flag=0;	
	}
	
	flag=1;

    printf("Dochod po odliczeniu skladki ZUS\n"); //e
    dochodPoOd1ZUS=dochod-skladkaZUS;
    printf("Dochod wynosi: %lf\n", dochodPoOd1ZUS);
    

    
     while(flag)
    { 
    	printf("Podaj wartosc skladki zdrowotnej: \n");
    	if(scanf("%lf", &skladkaZdrow)!=1)
    	{
    		printf("Niedozwolony znak w skladce zdrowotnej\n");
    		fflush(stdin);
    		
		}
		else if(skladkaZdrow<0)
		printf("Skladka zdrowotna nie moze byc ujemna\n");
		else
			flag=0;	
	}
	
	flag=1;
	
    
    if(przychod <= 85528)
    podatekNalezny=przychod*0.18-556.02;
    else
    podatekNalezny=14839.02+(przychod-85528)*0.32; //g
    printf("Podatek wynosi: %lf\n", podatekNalezny);
    
    podatekMinusSkladZdrow=podatekNalezny-skladkaZdrow;
    printf("Podatek po odliczeniu skladki zdrowotnej wynosi: %lf\n", podatekMinusSkladZdrow); //h
    
    
    
    while(flag)
    { 
    	printf("Podaj wplacona zaliczke na podatek dochodowy: \n");
    	if(scanf("%lf", &zaliczkaPodatek)!=1)
    	{
    		printf("Niedozwolony znak w zaliczce na podatek dochodowy: \n");
    		fflush(stdin);
    		
		}
		else if(zaliczkaPodatek<0)
		printf("Zaliczka na podatek dochodowy nie moze byc ujemna\n");
		else
			flag=0;	
	}
	
    
    podatekNalezny=podatekMinusSkladZdrow-zaliczkaPodatek;
    
    if(podatekNalezny>=0)
    {
    printf("Podatek nalezny wynosi: \n");
    printf("%lf", podatekNalezny);
    
    podatekNaleznyZaokr=ceil(podatekNalezny);
    printf("Podatek nalezny zaokrokralony wynosi:\n");
    printf("%lf", podatekNaleznyZaokr);
	}
	if(podatekNalezny<0)
    {
    podatekNalezny=-podatekNalezny;
    printf("Zwrot podatku wynosi: \n");
    printf("%lf", podatekNalezny);
    
    podatekNaleznyZaokr=ceil(podatekNalezny);
    printf("Zwrot podatku zaokroglany wynosi:\n");
    printf("%lf", podatekNaleznyZaokr);
	}
    
    
    
    
    
    

    


    return 0;
}
