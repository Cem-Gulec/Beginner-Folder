#include <stdio.h>
#include <stdlib.h>



int main() 
{
 	int sayi,max,sayac;
 	sayac=1; max=0;
 	
 	while(sayac<=10)
 	{
 		printf("%d. sayiyi gir",sayac++);
 		scanf("%d",&sayi);
 		if(sayi>max)
 		max=sayi;
 		
 		
 		
	 }
	 printf("sayilarin en buyugu %d",max);

	
system("pause");
	return 0;
}
