#include <stdio.h>
// 6, 28, 296, 8128
int main()
{
	int i,div=0,number;
	
	scanf("%d", &number);
	
	for(i=1; i<number; i++)
	{
		if(number%i==0)
		{
			div=div+i;
		}
	}
	if(div==number || number==1)
	printf("Liczba idealna");
	
	return 0;
}
