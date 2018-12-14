#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void referansagorekup(int *sayiptr)
{
	*sayiptr=*sayiptr**sayiptr**sayiptr;
}
int main(int argc, char *argv[]) 
{
	int sayi=5;
	referansagorekup(&sayi);
	printf("%d",sayi);
	return 0;
}
