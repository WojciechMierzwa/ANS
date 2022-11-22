#include <stdio.h>

int main()
{
	int number, number1;
	scanf("%d", &number);
	number1=number/10;

	if(number>=1)
	{
		switch(number1)
		{
		
		case 2 :
			printf("Dwadziescia");
			break;
		case 3 :
			printf("Trzydziesci");
			break;
		case 4 :
			printf("Czterdziesci");
			break;
		case 5 :
			printf("Piedziesiat");
			break;
		case 6 :
			printf("Szesciesiat");
			break;
		case 7 :
			printf("Siedemdziesiat");
			break;
		case 8 :
			printf("Osiemdziesiat");
			break;
		case 9 :
			printf("Dziewiecdziesiat");
			break;
		}
		number=number%10;
		
			
	}
	
	
	switch(number)
	{
	
	case 0:
		printf("zero");
		break;
	case 1:
		printf("jeden");
		break;
	case 2:
		printf("dwa");
		break;
	case 3:
		printf("trzy");
		break;
	case 4:
		printf("cztery");
		break;
	case 5:
		printf("piec");
		break;
	case 6:
		printf("szesc");
		break;
	case 7:
		printf("siedem");
		break;
	case 8:
		printf("osiem");
		break;
	case 9:
		printf("dziewic");
		break;
	case 10:
		printf("dziesiec");
		break;
	case 11:
		printf("jedenascie");
		break;
	case 12:
		printf("dwanascie");
		break;
	case 13:
		printf("trzynascie");
		break;
	case 14:
		printf("czternascie");
		break;
	case 15:
		printf("pietnascie");
		break;
	case 16:
		printf("szescnascie");
		break;
	case 17:
		printf("siedemnascie");
		break;
	case 18:
		printf("osiemnascie");
		break;
	case 19:
		printf("dziewietnascie");
		break;
		}
	return 0;
}
