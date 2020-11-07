#include <stdio.h>

int main()
{
	int kenar1,kenar2,kenar3;
	printf("Birinci kenar uzunlugunu yaziniz:");
	scanf("%d",&kenar1);
	printf("\nIkinci kenar uzunlugunu yaziniz:");
	scanf("%d",&kenar2);
	printf("\nUcuncu kenar uzunlugunu yaziniz:");
	scanf("%d",&kenar3);
	
	
	if(kenar1>kenar2 && kenar1>kenar3)
	{
		printf("%d en uzun kenardir.",kenar1);	
	}
	else if(kenar2>kenar1 && kenar2>kenar3)
	{	
		printf("%d en uzun kenardir.",kenar2);
	}
	else
	{
		printf("%d en uzun kenardir.",kenar3);
	}
	

	
	return 0;
}
