#include <stdio.h>
#include <stdlib.h>



int main() 
{
	
	int gecenler=0,kalanlar=0,gecersiz=0,ogrenci=1,sonuc;
	while(ogrenci<=10)
	{
		printf("sonucu gir:");
		scanf("%d",&sonuc);
		if(sonuc==1)
		gecenler++;
		else if(sonuc==0)
		kalanlar++;
		else
		gecersiz++;
		
		ogrenci++;
	}
	
	printf("Gecenlerin sayisi:%d\n Kalanlarin sayisi:%d\n Gecersiz not:%d",gecenler,kalanlar,gecersiz);
	system("pause");
	
	
	
	return 0;
}
