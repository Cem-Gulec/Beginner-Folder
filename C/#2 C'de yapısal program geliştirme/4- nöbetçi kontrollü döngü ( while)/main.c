#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	float ort;
 	int toplam,sayac,not;
 	toplam=0;
 	sayac=0;

 	
 	printf("sayi gir:");
 	scanf("%d",&not);
 	
 	while(not!=-1)
 	{
 		toplam=toplam+not;
 		sayac++;
 		printf("sayi gir:(cikis icin -1))");
 		scanf("%d",&not);
 		
	 }
 	
 	if(sayac!=0)
 	{
 		ort=(float)toplam/sayac;
 		printf("sinif ort %.2f",ort);
 		
	 }
	 
	 else
	 printf("hiç not girilmemiþtir");
	 
	 
	 system("pause");
	 return 0;
 	
 	
 	
	
}
