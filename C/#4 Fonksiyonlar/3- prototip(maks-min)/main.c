#include <stdio.h>
#include <stdlib.h>


int maks(int,int,int);
int min(int,int,int);
int main() 
{
	int a,b,c;
	printf("sayi gir:");
	scanf("%d%d%d",&a,&b,&c);
	printf("maks=%d\n",maks(a,b,c));
	printf("min=%d\n",min(a,b,c));
	printf("maks-min= %d",maks(a,b,c)-min(a,b,c));
	
	
	
	system("pause");
	return 0;
}
int maks(int x,int y,int z)
{
	int maks=x;
	if(y>maks)
	maks=y;
	if(z>maks)
	maks=z;
	
	return maks;
}
int min(int x,int y,int z)
{
	int min=x;
	if(y<min)
	min=y;
	if(z<min)
	min=z;
	
	return min;
}

