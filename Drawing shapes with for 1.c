#include <stdio.h>

int main(void) 
{
	int bosluk,yildiz,i;
	
	for(i=1;i<6;i++)
	{	
		for(bosluk=4;bosluk>=i;bosluk--)
		{
			printf(" ");
		}
		for(yildiz=1;yildiz<=i;yildiz++)
		{
			printf("*");
		}
		for(yildiz=1;yildiz<i;yildiz++)
		{
		printf("*");
		}
		
		printf("\n");	
	}
	
	for(i=1;i<5;i++)
	{
		for(bosluk=1;bosluk<=i;bosluk++)
		{
			printf(" ");
		}
		for(yildiz=4;yildiz>=i;yildiz--)
		{
			printf("*");
		}
		for(yildiz=3;yildiz>=i;yildiz--)
		{
		printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
