#include <stdio.h>
#include <stdlib.h>
#define sayi_boyut 10

//eleman,deger,grafik
int main() 
{
	int i,j;
	int sayilar[sayi_boyut]={1,2,3,5,15,20,2,3,1,3};
	
	printf("%s%6s%12s\n","Eleman","Deger","Grafik");
	for(i=0;i<sayi_boyut;i++)
	{
		printf("%3d%6d         ",i,sayilar[i]);
		for(j=0;j<sayilar[i];j++)
		printf("*");
		printf("\n");
	}
	
	
	
	return 0;
}
