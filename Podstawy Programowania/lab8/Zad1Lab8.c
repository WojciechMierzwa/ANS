#include <stdio.h>

int main()
{
	int tab1[5] = {1,2,3,4,5};
	int tab2[5] = {010,011,012,013,027};
	int tab3[5] = {0x10,0xDE,0xDAD,0xF,0xDDD}; 
	int i;
	printf("System decymalny\n");
	for(i=0; i<5; i++)
	{
		printf("tab1[%d] = %d\n", i, tab1[i]);
	}
	printf("System oktalny\n");
	for(i=0; i<5; i++)
	{
		printf("tab2[%d] = %o          ", i, tab2[i]); 	printf("tab2[%d] = %d\n", i, tab2[i]);
	}
	printf("System hexadecymalny\n");
	for(i=0; i<5; i++)
	{
		printf("tab3[%d] = %x          ", i, tab3[i]); printf("tab3[%d] = %d\n", i, tab3[i]);
	}
	
	
	return 0;
}
