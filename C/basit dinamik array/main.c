#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int **dizi,i,j,sayi;
	dizi=(int **)malloc(sizeof(int*)*2);
	for(i=0;i<5;i++)
		dizi[i]=(int *)malloc(sizeof(int)*2);
	
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			printf("sayi gir:");
			scanf("%d",&sayi);
			dizi[i][j]=sayi;
		}
	
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			printf("%d",*(*(dizi+i)+j));
	
	
	
	return 0;
}
