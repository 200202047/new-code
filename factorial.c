#include <stdio.h>

int main()
{
	double i,f,faktoriyel=1;
	printf("Hangi sayinin faktoriyeli? ");
	scanf("%lf",&f);
	
	for(i=1;i<=f;i++)
	{
		faktoriyel=faktoriyel*i;
	}
	
	printf("Faktoriyeli= %lf",faktoriyel);
	
	return 0;
}
