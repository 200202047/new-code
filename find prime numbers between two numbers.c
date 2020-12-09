
#include <stdio.h>
int main()
{
	int ilk,son,i,kontrol,bolen;	
	printf ("Ilk deger: ");
    scanf("%d",&ilk);
	printf ("Son deger: ");
    scanf("%d",&son);	
	printf("Asal Sayilar %d ile %d arasindaki:\n ",ilk,son);
	
	for(i=ilk;i<=son;i++)
	{
		for(bolen=2;bolen<i;bolen++)
		{
			if(i%bolen==0)
			{
				kontrol=0;
				break;
			}
			else 
			kontrol=1;
		}
		if(kontrol==1)
		{
		printf("%d, ",i);
		}
	}
	
	return 0;
}
