#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	int sayac,toplam,not,ort;
 	toplam=0; sayac=1;
 	while(sayac<=10)
 	{
 		printf("sayi gir:");
 		scanf("%d",&not);
 		toplam=toplam+not;
 		sayac++;
	 }
 	
 	ort=toplam/10;
 	printf("ort=%d",ort);
 	
 	system("pause");
 	
	return 0;
}
