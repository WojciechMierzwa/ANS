#include <stdio.h>
//153 370 371 407
int main()
{
	int number,i,temp,arm=0, number1;
	
	scanf("%d", &number);
	number1=number;
	while(number)
	{
		temp=number%10;
		number=number/10;
		arm=arm+temp*temp*temp;
	}
	if(arm==number1)
	printf("%d jest liczba armstronga", number1);
	else
	printf("%d", arm);
	return 0;
}
