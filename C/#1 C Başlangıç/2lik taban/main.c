#include <stdio.h>
#include <stdlib.h>




void ikilitaban()
{
	int bolum,kalan,adimsay,sayi;
	int bit0,bit1,bit2,bit3;
	bit0=bit1=bit2=bit3=0;
	adimsay=0;
	while(sayi!=0){
	
		bolum=sayi/2;
		kalan=sayi%2;
		sayi=bolum;
		switch(adimsay)
		{
		case 0:
			bit0=kalan;
			break;
		case 1:
			bit1=kalan;
			break;
		case 2:
			bit2=kalan;
			break;
		case 3:
			bit3=kalan;
			break;
		}
		
		adimsay++;			
	}
	printf("2lik tabanda sayiniz: %hi%hi%hi%hi",bit3,bit2,bit1,bit0);
}



int main() 
{
	int sayi;
	printf("sayi gir:");
	scanf("%d",&sayi);
	ikilitaban(sayi);

	system("pause");
	return 0;
}
