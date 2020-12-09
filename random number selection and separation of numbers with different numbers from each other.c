#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,sayac=0,secim=1,rastgele;
	
	while(secim<=100)
	{ 
	rastgele=100+rand()%899;
	
 		a=rastgele/100;
 		b=(rastgele%100)/10;
 		c=rastgele%10;
 		if(a!=b && a!=c && b!=c) 
	 	{
 		printf("%d \n",rastgele);
 		sayac++;
 		}
 		secim++;
 	}
	printf("Toplam %d sayi",sayac);
	
	return 0;
	getch();
}
