#include <stdio.h>
#include <stdlib.h>
#define frekans_boyutu 11
#define cevap_boyutu 20


int main()
{
	int i,j;
	int frekans[frekans_boyutu]={0};
	int cevaplar[cevap_boyutu]={1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
	
	for(i=0;i<cevap_boyutu;i++)
	++frekans[cevaplar[i]];
	
	printf("%s%17s\n","Oylama","Frekans");
	
	for(j=1;j< frekans_boyutu;j++)
	printf("%6d%17d\n",j,frekans[j]);
	
	
	
	return 0;
}
