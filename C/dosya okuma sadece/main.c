#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// textden okuma, sayi sýfýrlama kullanýcýdan iste
int main() 
{
	//************************
		

	FILE *dosya;
	int rowcol[2],i;
	for(i=0;i<2;i++)
	{
		fscanf(dosya,"%s",&rowcol);
	}
	double notlar[rowcol[0]][rowcol[1]];
	dosya=fopen("kayit.txt","r");
	if(dosya!=NULL)
	{
		while(!feof(dosya))
		{
			fscanf(dosya,"%s",&notlar);
			printf("%s   ",notlar);
						
		}	
	}
	
	else
	printf("Dosya bulunamadý");
	
	return 0;
}
