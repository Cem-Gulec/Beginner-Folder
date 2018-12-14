#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,b,c,enb=0;
	printf("3 sayiyi giriniz:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	enb=a;
	
	else if(b>a && b>c)
	enb=b;
	
	else
	enb=c;
	
	printf("En büyük sayi %d",enb);
	
	system("pause");
	
}
