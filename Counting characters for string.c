
#include <stdio.h>

int main()
{
	
	char gender[5];
	printf("Cinsiyetiniz nedir?(kiz/erkek) ");
	scanf("%s",gender);
	
	char name[50];
	int character;
	printf("\nIsminizi giriniz: ");
	scanf("%s",&name);
	character=strlen(name);
	
	if(strcmp(gender, "kiz")==0)
	{
		if(character>=6)
		{
			printf("Isminiz ne kadar uzun, %s Hanim!",name);
		}
		else
		{
			printf("Isminiz ne kadar hos, %s Hanim!",name);	
		}
	}
	
	else
	{
		if(character>=6)
		{
			printf("Isminiz ne kadar uzun, %s Bey!",name);
		}
		else
		{
			printf("Isminiz ne kadar hos, %s Bey!",name);	
		}	
	}	
	
	return 0;
}
