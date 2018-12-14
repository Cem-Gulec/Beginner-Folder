#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	int a,birler,onlar,yuzler,binler,onbinler;
	printf("sayi gir:");
	scanf("%d",&a);
	
	birler= a%10;
	onlar=(a/10)%10;
	yuzler=(a/100)%10;
	binler=(a/1000)%10;
	onbinler=(a/10000)%10;
	
	printf("%d%3d%3d%3d%3d",onbinler,binler,yuzler,onlar,birler);
	
	system("pause");
	
	
	
	return 0;
}
