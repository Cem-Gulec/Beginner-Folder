#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	int sayi,sayac,k,n,aranan;
	n=1;
	sayac=0;
	
	printf("sayi gir:");
	scanf("%d",&sayi);
	printf("aranan sayi:");
	scanf("%d",&aranan);
	
	
	while(k=(sayi/n)%10)
	{
		if(k==aranan)
		sayac++;
		n=n*10;
	}
	printf("%d tane %d var",sayac,aranan);
 	
 	
 	system("pause");
	return 0;
}
