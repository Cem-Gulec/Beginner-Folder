#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	int sayi,adet,toplam,sayac;
	sayac=0;
	toplam=0;
	
	printf("kac adet sayi girilecek: ");
	scanf("%d",&adet);
	
	while(sayac!=adet)
	{
		printf("Sayi gir:");
		scanf("%d",&sayi);
		toplam=toplam+sayi;
		sayac++;		
	}
	
	printf("toplam : %d",toplam);
	
	system("pause");
	return 0;
}
