#include <stdio.h>

void printer(int t[3][3])
{
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", t[i][j]);
		}
		printf("\n");
	}
}
void check(int t[3][3])
{
	int k,check_row,check_col,check_diag1,check_diag2;
	
	check_diag1=t[0][0]*t[1][1]*t[2][2]; //przekatna 1
	check_diag2=t[2][0]*t[1][1]*t[0][2]; //przekatna 2
	if(check_diag1==1 || check_diag2==1)
	{
		printf("Gracz 1 wygral");
		exit(0);
	}
	if(check_diag1==8 || check_diag2==8)
	{
		printf("Gracz 2 wygral");
		exit(0);
	}
	for(k=0; k<3;k++)
	{
		check_row=t[k][0]*t[k][1]*t[k][2];
		check_col=t[0][k]*t[1][k]*t[2][k];
		if(check_row==1 || check_col==1)
		{
			printf("Gracz 1 wygral");
			exit(0);
		}
		if(check_row==8 || check_col==8)
		{
			printf("Gracz 2 wygral");
			exit(0);
		}
		
		
		
	}
}
int main(){
	
	int t[3][3]={0};
	int row,col;
	while(1)
	{
		printf("Gracz 1\n");
		printf("Podaj nr wiersza:\n");
		scanf("%d", &row);
		printf("Podaj nr kolumny:\n");
		scanf("%d", &col);
		t[row][col]=1;
		printer(t);
		check(t);
		printf("Gracz 2\n");
		printf("Podaj nr wiersza:\n");
		scanf("%d", &row);
		printf("Podaj nr kolumny:\n");
		scanf("%d", &col);
		t[row][col]=2;
		printer(t);
		check(t);
	}
	return 0;
}
