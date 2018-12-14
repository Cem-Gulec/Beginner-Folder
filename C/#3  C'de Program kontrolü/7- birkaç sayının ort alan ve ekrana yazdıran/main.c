#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	int toplam=0,sayac=0,sayi,sonsayi=9999;
 	float ort;
 	printf("sayi gir:");
 	scanf("%d",&sayi);
 	
 	while(sayi!=9999)
 	{
 		toplam=toplam+sayi;
 		sayac++;
 		printf("sayi gir:");
 		scanf("%d",&sayi);
	 }
	 
 	if(sayac!=0)
 	{
 		toplam=toplam+sonsayi;
 		ort=(float)toplam/sayac;
 		printf("ort %.2f",ort);
	 }
	 else
	 printf("not girilmedi");
 	
 	
 	
 	
 	system("pause");
	return 0;
}
