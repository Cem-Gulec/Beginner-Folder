#include <stdio.h>
#include <stdlib.h>
#define BOYUT 7

void degistir(int *ptr1,int *ptr2)
{
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
void sirala(int *dizi,const int boyut)
{
	void degistir(int *,int *);
	int *ptr1,*ptr2;
	int temp,j,a;
	for(a=0;a<boyut;a++)
		for(j=0;j<boyut;j++)
		{
			if(dizi[j]>dizi[j+1])
			{
			degistir(&dizi[j],&dizi[j+1]);
			}
		}
}
int main() 
{
	int i;
	int x[BOYUT]={85,111,-100,444,1,2,86};
	printf("ilk hal\n");
	for(i=0;i<BOYUT;i++)
	printf("% d",x[i]);
	
	sirala(x,BOYUT);
	
	printf("son hal\n");
	for(i=0;i<BOYUT;i++)
	printf("% d",x[i]);

	return 0;
}
