#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	int top,sayi,sayac;
 	top=0;
 	sayac=0;
 	printf("sayi gir:");
 	scanf("%d",&sayi);
 	
 	while(sayi>0 && sayi<=30)
 		{
		 
 		printf("sayi gir:");
 		scanf("%d",&sayi);
 		if(sayi%2==0)
 		top=top+sayi;
 		sayac++;
 		}
	 
 	
 	printf("toplam : %d",top);
 	
 	
 	
 	system("pause");
	return 0;
}
