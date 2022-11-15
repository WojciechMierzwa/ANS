#include <stdio.h>

void check(int player1, int player2)
{
	if(player1==player2)
		{
		printf("remis\n");
		}
		if((player1==1 && player2==2)||(player1==2 && player2==3)||(player1==3 && player2==1))
		{
		printf("gracz 1 wygrywa\n");
		}
		if((player2==1 && player1==2)||(player2==2 && player1==3)||(player1==1 && player2==3))
		{
		printf("gracz 2 wygrywa\n");
		}
}
int main(){
	
	int mode;
	int player1, player2;
	printf("wcisnij:\n");
	printf("1 dla uzytkownik vs uzytkownik\n2 dla uzytkownik vs komputer\n3 dla komputer vs komputer\n");
	scanf("%d", &mode);
	if(mode==1)
	{
		printf("Gracz 1:\n1 dla papier\n2 dla kamien\n3 dla nozyce\n");
		scanf("%d", &player1);
		printf("Gracz 2:\n1 dla papier\n2 dla kamien\n3 dla nozyce\n");
		scanf("%d", &player2);
		check(player1,player2);
			
	}
	
	if(mode==2)
	{
		printf("Gracz 1:\n1 dla papier\n2 dla kamien\n3 dla nozyce\n");
		scanf("%d", &player1);
	
		printf("Komputer wybral");
		if(player1==1)
		{
			printf(" nozyce\n");
		}
		if(player1==2)
			printf(" papier\n");
		if(player1==3)
			printf(" kamienn\n");
			
		printf("Komputer wygral");
	}
	
	if(mode==3)
	{
		player1=(rand()%3)+1;
		player2=(srand()%3)+1;
		printf("Komputer1 wybral");
			if(player1==1)
		{
			printf(" papier\n");
		}
		if(player1==2)
			printf(" kamien\n");
		if(player1==3)
			printf(" nozyce\n");
		printf("Komputer2 wybral");
		if(player2==1)
		{
			printf(" papier\n");
		}
		if(player2==2)
			printf(" kamien\n");
		if(player2==3)
			printf(" nozyce\n");
			
		check(player1, player2);
	}
	
	
	return 0;
}
