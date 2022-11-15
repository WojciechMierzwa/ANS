#include <stdio.h>



int main(){
	
	int t[3][3]={0,0,0,0,0,0,0,0,0};
	
	int choice1,choice2,temp;
	
	
	int i,j,k;
	
	while(1)
	{
		printf("Gracz 1 wybierz wiersz 1-3 \n");
		scanf("%d", &choice1);
		printf("Gracz 1 wybierz kolumne 1-3 \n");
		scanf("%d", &choice2);
		t[choice1-1][choice2-1]=1;
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				printf("%d ", t[i][j]);
			}
			printf("\n");
		}
		printf("Gracz 2 wybierz wiersz 1-3 \n");
		scanf("%d", &choice1);
		printf("Gracz 2 wybierz kolumne 1-3 \n");
		scanf("%d", &choice2);
		t[choice1-1][choice2-1]=2;
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				printf("%d ", t[i][j]);
			}
			printf("\n");
		}
		
		
			
	}
		
		
	

	
	return 0;
}

	
