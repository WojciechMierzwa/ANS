#include <stdio.h>

int main()
{
	int number,i,temp,arm=0;
	
	scanf("%d", &number);
	
	for(i=0; i<=number; i++)
	{
		temp=number%10;
		number=number/10;
		arm=arm+temp*temp*temp;
	}
	printf("%d", arm);
	return 0;
}
