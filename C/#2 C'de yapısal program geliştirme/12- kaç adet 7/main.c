#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	int sayi,sayac,k,n;
	n=1;
	sayac=0;
	
	printf("sayi gir:");
	scanf("%d",&sayi);
	
	while(k=(sayi/n)%10)
	{
		if(k==7)
		sayac++;
		n=n*10;
	}
	printf("%d adet 7 var",sayac);
	
	
	
 	
 	
 	
 	system("pause");
	return 0;
}
