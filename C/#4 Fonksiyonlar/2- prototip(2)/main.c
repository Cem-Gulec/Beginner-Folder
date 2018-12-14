#include <stdio.h>
#include <stdlib.h>


int genel(int,int,int);
int main() 
{
	int a,b,c;
	printf("sayi girin:");
	scanf("%d%d%d",&a,&b,&c);
	printf("en buyuk olan:%d",genel(a,b,c));
	
	
	system("pause");
	return 0;
}

int genel(int x,int y,int z)
{
	int maks=x;
	if(y>maks)
	maks=y;
	if(z>maks)
	maks=z;
	
	return maks;
}
