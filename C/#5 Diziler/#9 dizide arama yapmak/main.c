#include <stdio.h>
#include <stdlib.h>
#define BOYUT 5



int arama(int x[],int aranan,int boyut)
{
	
	int i;
	for(i=0;i<boyut;i++)
	{
		if(x[i]==aranan)
		return i;
	}
		return -1;
	
}

int main() 
{
	
	int eleman,anahtar;
	int a[BOYUT]={1,2,3,4,5};
	printf("aradiginiz sayi:");
	scanf("%d",&anahtar);
	eleman=arama(a,anahtar,BOYUT);
	if(eleman==-1)
	printf("aradiginiz sayi yok");
	else
	printf("aradiginiz sayinin yeri : %d",eleman);
	
	
	return 0;
}
