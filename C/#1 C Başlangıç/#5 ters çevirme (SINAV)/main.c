#include <stdio.h>
#include <stdlib.h>

int main() {
	int sayi,a,b,sayac=0;
	
	do{
		sayac++;
	printf("sayi gir:");
	scanf("%d",&sayi);
	if (sayi<0)
	{
		printf("negatif sayi girdiniz\n");
		continue;
	}
	else if(sayi<10 || sayi>99)
	{
		printf("2 digitli sayi gir\n");
		fflush(stdin);
		continue;
	}
	
	a=sayi%10; 
	b=(sayi/10)%10;
	printf("%d%d\n",a,b);
	
	}while(sayac<5);
	
	return 0;
}
