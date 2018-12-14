#include <stdio.h>
#include <stdlib.h>



int main()

 {
 	int sayi,sayac,enb1,enb2;
 	sayi=0; sayac=1; enb1=sayi;
 	
 	while(sayac<4)
 	{
 		printf("%d. sayiyi gir:",sayac++);
 		scanf("%d",&sayi);
 		
 		if(sayi>enb1){
 		
		 	enb2=enb1;
 			enb1=sayi;
		 }
 		
 		
 		else if(sayi>enb2)
 		enb2=sayi;
 		printf("en buyuk 1.si %d\n en buyuk 2.si %d\n\n",enb1,enb2);
	 }
 	
 	
 	
 	system("pause");
 	
 	
	return 0;
}
