#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int boyut,i,toplam=0,sayi;
	printf("boyutu siz belirleyin:");
	scanf("%d",&boyut);
	int n[boyut];
	
	for(i=0;i<boyut;i++)
	{
		printf("sayi gir:");
		scanf("%d",&sayi);
		n[i]=sayi;
		toplam=toplam+n[i];
	}
	printf("elemanlarin toplami: %d",toplam);
	
	
	
	
	return 0;
}
