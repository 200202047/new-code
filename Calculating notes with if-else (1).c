#include <stdio.h>

int main()
{
	
	int vize1,vize2,final;
	printf("Birinci vizenizi yaziniz:");
	scanf("%d",&vize1);
	printf("\nIkinci vizenizi yaziniz:");
	scanf("%d",&vize2);
	printf("\nFinal notunuzu yaziniz:");
	scanf("%d",&final);
	
	vize1=(vize1*30)/100;
	vize2=(vize2*30)/100;
	final=(final*40)/100;
	
	int sonuc;
	sonuc=vize1+vize2+final;
	
	printf("Donem notu: %d",sonuc);
	
	if(sonuc>=50)
	{
		printf("\nGectiniz.");
	}
	else
	{
		printf("\nKaldiniz.");
	}
	
	return 0;
}
