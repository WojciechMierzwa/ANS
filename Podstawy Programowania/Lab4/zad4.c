#include <stdio.h>

int main(){
	 
	 int n, n1, n2, temp,max=0;
	 
	 int flag=1;
		
		while(flag)
	    { 
	    	printf("Podaj n\n");
	    	if(scanf("%d",&n)!=1)
	    	{
	    		printf("n musi byc liczba\n");
	    		fflush(stdin);
	    		
			}
			else if(n<2)
			printf("n musi byc liczba wieksza lub rowna 2, inaczej program nie ma sensu\n");
			else
				flag=0;
	    	
		}
		
		int i;
		for(i=0; i<n; i++)
		{
			n2=n1;
			printf("Podaj liczbe nr %d\n", i+1);
			
			flag=1;
	    	while(flag)
	    	{
	    		if(scanf("%d",&n1)!=1)
		    	{
		    		printf("n musi byc liczba\n");
		    		fflush(stdin);
		    		
				}
				else if(n1<=0)
				printf("Liczba musi byc nieujemna\n");
				else
				flag=0;
			}
			
			temp=n2-n1;
			if(temp<0);
			temp=-temp;
			if(temp>max)
			max=temp;
		}
		
		printf("%d\n", max);
	
	return 0;
}
