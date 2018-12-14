#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a=2;
	while(a<=1000)
	{
		printf("sayi=%d\n",a);
		a=a*2;
	}
	
	system("pause");
	return 0;
}
