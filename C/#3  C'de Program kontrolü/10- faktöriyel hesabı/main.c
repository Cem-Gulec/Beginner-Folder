#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int sayi,i,sayac,carpim=1;
	printf("sayi gir:");
	scanf("%d",&sayi);
	i=1;
	
	while(sayi!=i)
	{
		carpim=carpim*i;
		i++;
		
	}
	carpim=carpim*sayi;
	printf("sonuc:%d",carpim);
	system("pause");
	return 0;
}
