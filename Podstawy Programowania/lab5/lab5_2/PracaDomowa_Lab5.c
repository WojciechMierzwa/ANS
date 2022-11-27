#include <stdio.h>

void number(int amount); //drukuje slownie liczbe
void milion(int digit, int n, int amount); //drukuje napis milon do liczb
void thousand(int digit, int n, int amount); //drukuje napis tysiace do liczb
void pln(int digit, int n, int amount); //drukuje zlote
int check(int number); //sprawdza czy liczba jest wieksza = miliard jesli tak to nie pozwala przejsc dalej

int main()
{	
	int amount=check(amount);
 
	int amount1=amount;
	int length=0;
	int temp;
	while(amount1)
	{
		amount1=amount1/10;
		length++;
	}
	
	if(length>=7)
	{
		temp=(amount/1000000)%1000;
		number(temp);
		milion(temp%10,length, amount);
	}
	if(length>=4)
	{
		temp=(amount/1000)%1000;
		number(temp);
		temp=temp%10;
		thousand(temp%10,length, amount);
	}
	if(length>=1)
	{
		number(amount%1000);
		pln(amount%10, length, amount);	
	}

	return 0;
}

int check(int number)
{
	while(1)
    { 
    	printf("Prosze podac ilosc pieniedzy\n");
    	if(scanf("%d",&number)!=1)
    	{
    		printf("Znakow poza cyframi program nie obsluguje\n");
    		fflush(stdin);	
		}
		else
			return number;
    	
	}
}

void number(int amount)
{
	
	switch(amount/100)
	{
		case 1:
			printf("sto ");
			break;
		case 2:
			printf("dwiescie ");
			break;
		case 3:
			printf("trzysta ");
			break;
		case 4:
			printf("czterysta ");
			break;
		case 5:
			printf("piecset ");
			break;
		case 6:
			printf("szescset ");
			break;
		case 7:
			printf("siedemset ");
			break;
		case 8:
			printf("osiemset ");
			break;
		case 9:
			printf("dziewiecset ");
			break;
		
	}
	
	//20-90

	switch((amount%100)/10)
	{
		case 2:
			printf("dwadziescia ");
			break;
		case 3:
			printf("trzydziesci ");
			break;
		case 4:
			printf("czterdziesci ");
			break;
		case 5:
			printf("piedziesiat ");
			break;
		case 6:
			printf("szescdziesiat ");
			break;
		case 7:
			printf("siedemdziesiat ");
			break;
		case 8:
			printf("osiemdziesiat ");
			break;
		case 9:
			printf("dziewiecdziesiat ");
			break;
	}

	
	
	//1-19
	if((amount%100)>=10 && (amount%100)<=19) //warunek prawdziwy dla liczb z zakresu 10-19
	{
		switch((amount-10)%10) //przesuwamy zakres liczb 10-19 do 0-9 aby zastowac mod 
		{
			case 0:
				printf("dziesiec ");
				break;
			case 1:
				printf("jedenascie ");
				break;
			case 2:
				printf("dwanascie ");
				break;
			case 3:
				printf("trzynascie ");
				break;
			case 4:
				printf("czternascie ");
				break;
			case 5:
				printf("pietnascie ");
				break;
			case 6:
				printf("szesnascie ");
				break;
			case 7:
				printf("siedemnascie ");
				break;
			case 8:
				printf("osiemnascie ");
				break;
			case 9:
				printf("dziewietnascie ");
				break;
		}
	}
	else 
	{
		switch(amount%10) //wykonuje sie dla zakresu 1-9
	{
		case 1:
			printf("jeden ");
			break;
		case 2:
			printf("dwa ");
			break;
		case 3:
			printf("trzy ");
			break;
		case 4:
			printf("cztery ");
			break;
		case 5:
			printf("piec ");
			break;
		case 6:
			printf("szesc ");
			break;
		case 7:
			printf("siedem ");
			break;
		case 8:
			printf("osiem ");
			break;
		case 9:
			printf("dziewiec ");
			break;
		}
	}			
}

void milion(int digit, int n, int amount)
{
	int temp1,temp2,temp3;
	temp1=(amount/1000000)%10;
	temp2=(amount/10000000)%10;
	temp3=(amount/100000000)%10;
	if(temp1==1 && temp2==0 && temp3==0)
		printf("milion ");
	else if((digit>1 && digit<5))
		printf("miliony ");
	else 
		printf("milionow ");
	
}
void thousand(int digit, int n, int amount)
{
	int temp1,temp2,temp3;
	temp1=(amount/1000)%10;
	temp2=(amount/10000)%10;
	temp3=(amount/100000)%10;
	if(temp1==1 && temp2==0 && temp3==0)
		printf("tysiac ");
	else if(digit>1 && digit<5)
		printf("tysiace ");
	else if((temp1+temp2+temp3)==0) // warunek aby tysiace sie nie pojawialy gdy mamy 000 tysiecy np 1000000, 11000123
		;
	else 
		printf("tysiecy ");

}
void pln(int digit, int n, int amount)
{
	if(digit==1 && n==1) //zloty wystepuje tylko w liczbie pojedynczej
		printf("zloty");
	else if((digit>1 && digit<5)&&n==1)
		printf("zlote");
	else
		printf("zlotych");
}

