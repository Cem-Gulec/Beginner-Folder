#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	int sayi,sayac,enk,k,adet;
 	sayac=0; 
	sayi=0;
	enk=0;
	
	printf("kac adet sayi girilecek: ");
	scanf("%d",&adet);
	
	while(sayac!=adet)
	{
		enk=adet;
		printf("sayi gir:");
		scanf("%d",&sayi);
		if(sayi<enk)
		{
			k=enk;
			enk=sayi;
		}
		sayac++;
		printf("en kucuk%d\n",adet,enk);
	}
 	
 	printf("en kucuk sayi: %d",enk);
 	
 	system("pause");
	return 0;
}
