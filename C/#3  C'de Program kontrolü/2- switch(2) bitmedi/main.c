#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	char not;
 	int aSay=0,bSay=0,cSay=0;
 	printf("harf notunuzu giriniz:");
 	
 	
 	while((not=getchar())!=EOF){
	 
 	switch(not)
 	{
 		case 'A':case'a':
 			aSay++;
 			break;
 		case 'B':case'b':
 			bSay++;
 			break;
 		case 'C':case'c':
 			cSay++;
 			break;
 		default:
 			printf("yanlis!!");
 			break;
	 }
}
 	
 	printf("Toplam A notu :%d",aSay);
 	printf("Toplam B notu :%d",bSay);
 	printf("Toplam C notu :%d",cSay);
 	
 	system("pause");
	return 0;
}
