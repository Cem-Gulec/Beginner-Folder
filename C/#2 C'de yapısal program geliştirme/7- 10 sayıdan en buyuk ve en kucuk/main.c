#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int adet,i,sayi,kucuk,buyuk;
	printf("Kac adet sayi:");
	scanf("%d",&adet);
	
	for(i=0;i<adet;i++)
	{
		printf("%d. sayiyi gir:",i);
		scanf("%d",&sayi);
		
		if(i==0)
		{
			buyuk=sayi;
			kucuk=sayi;
			
		}
		
		else{
			
			if(kucuk>sayi)
			kucuk=sayi;
			
			if(buyuk<sayi)
			buyuk=sayi;
			
			
		}
			
	}
	
		printf("En buyuk sayi:%d \n En kucuk sayi:%d",buyuk,kucuk);
		
		
	system("pause");
	return 0;
}
