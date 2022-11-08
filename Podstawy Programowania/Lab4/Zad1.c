#include <stdio.h>



int main(){
	int room1, room2, room3;
	
	int flag=1;
    
    while(flag)
    { 
    	printf("Podaj ile osob chce wejsc do sali nr1:\n");
    	if(scanf("%d",&room1)!=1)
    	{
    		printf("Prosze podac liczbe osob, nie znak\n");
    		fflush(stdin);
    		
		}
		else if(room1<0)
		printf("Liczba osob nie moze byc ujemna, prosze podac prawdziwa wartosc\n");
		else
			flag=0;
    	
	}
	
	flag=1;
	
	
	while(flag)
    { 
    	printf("Podaj ile osob chce wejsc do sali nr2:\n");
    	if(scanf("%d",&room2)!=1)
    	{
    		printf("Prosze podac liczbe osob, nie znak\n");
    		fflush(stdin);
    		
		}
		else if(room2<0)
		printf("Liczba osob nie moze byc ujemna, prosze podac prawdziwa wartosc\n");
		else
			flag=0;
    	
	}
	
	flag=1;
	
	while(flag)
    { 
    	printf("Podaj ile osob chce wejsc do sali nr3:\n");
    	if(scanf("%d",&room3)!=1)
    	{
    		printf("Prosze podac liczbe osob, nie znak\n");
    		fflush(stdin);
    		
		}
		else if(room3<0)
		printf("Liczba osob nie moze byc ujemna, prosze podac prawdziwa wartosc\n");
		else
			flag=0;
    	
	}
	
	if (room1>100)
	printf("Sale nr1 musi opuscic %d osob \n", room1 -100);
	else if(room1==100)
	printf("Sala nr 1 jest pelna\n");
	else
	printf("Do sali nr1 moze wejsc %d osob \n", 100-room1);
	
	if (room2>60)
	printf("Sale nr2 musi opuscic %d osob \n", room2 -60);
	else if(room2==60)
	printf("Sala nr 2 jest pelna\n");
	else
	printf("Do sali nr2 moze wejsc %d osob \n", 60-room2);
	
	if (room3>50)
	printf("Sale nr3 musi opuscic %d osob \n", room3 -50);
	else if(room3==50)
	printf("Sala nr3 jest pelna\n");
	else
	printf("Do sali nr3 moze wejsc %d osob \n", 50-room3);
	return 0;
}
