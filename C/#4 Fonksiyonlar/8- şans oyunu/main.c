#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int zaratma(void);
int main()
 {
 	int oyuncudurumu,toplam,oyuncupuani;
 	
 	srand(time(NULL));
 	toplam=zaratma();
 	
 	switch(toplam)
 	{
 		case7:case11:
 			oyuncudurumu=1;
 			break;
 			
 		case2:case3:case12:
 			oyuncudurumu=2;
 			break;
 			
 		default:
 			oyuncudurumu=0;
 			oyuncupuani=toplam;
 			printf("oyuncunun kazanacagi zar:%d\n",oyuncupuani);
 			break;
	 }
 	
 	while(oyuncudurumu==0)
 	{
 		toplam=zaratma();
 		if(toplam==oyuncupuani)
 		oyuncudurumu=1;
 		else if(toplam==7)
 		oyuncudurumu=2;
 		
	 }
	 
 	if(oyuncudurumu==1)
 	printf("oyuncu kazandi\n");
 	else if(oyuncudurumu==2)
 	printf("oyuncu kaybetti\n");
 	
 	system("pause");
	return 0;
}
int zaratma(void)
{
	int zar1,zar2,toplamzar;
	zar1=1+rand()%6;
	zar2=1+rand()%6;
	toplamzar=zar1+zar2;
	printf("oyuncu %d ve %d atti : toplam= %d \n",zar1,zar2,toplamzar);
	return toplamzar;
}
