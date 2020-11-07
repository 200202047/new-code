#include <stdio.h>

int result,num1,num2,num3;

int max(num1,num2,num3)
{
	
	if(num1>=num2 && num1>=num3){
		result=num1;
	}
	else if(num2>=num1 && num2>=num3){
		result=num2;
	}
	else{
		result=num3;
	}
	
	return result;
	
}
int main()
{
	printf("Birinci numarayi giriniz:");
	scanf("%d",&num1);
	printf("\nIkinci numarayi giriniz:");
	scanf("%d",&num2);
	printf("\nUcüncü numarayi giriniz:");
	scanf("%d",&num3);
	
	printf("\nEn Buyuk:%d",max(num1,num2,num3));
	
	return 0;
}

