#include <stdio.h>
#include <stdlib.h>

int c[100],k=0,z[100],j=0,d=0;
double dege[100];
char y[100],f=0;
double deger;

int mirrorNum(int number)
{
 	int ters=0,n;
	n=number;
	
	while(n!=0)//palindrome
	{//0,213 ters:312
		ters=ters*10;
		ters=ters+n%10;
		n=n/10;
	}
	if(number==ters)
	y[f]='y';
	else
	y[f]='n';
	f++;
}

double finDigAVG(int number)
{
	int sayac=0;
	int x[100],i=0,n,j;
	double sonuc=0;
	
	for(n=1;n<number;n=n*10)//x[0]:4,x[1]:3,x[2]:4
	{//sayi:0,434 n:1000
		x[i]=(number/n)%10;
		sonuc=sonuc+x[i];
		i++;	
	}
	sonuc=sonuc/i;
	dege[d]=sonuc;
	d++;
}

int main()
 {
 	int sayi,sayac=0,i;
 	do{
 	printf("sayi gir:");
 	scanf("%d",&sayi);
 	if(sayi<0)
 	{
 		printf("negatif sayi\n");
 		break;
	 }
	c[k]=sayi;//
	k++;
	sayac++;
	mirrorNum(sayi);
	finDigAVG(sayi);	
}while(sayac<30);

	printf("%s%14s%20s\n","Number","IsMirror","DigAverage");
	k=0;f=0;d=0;
	for(i=0;i<sayac;i++)
	printf("%d%14c%20.2lf\n",c[k++],y[f++],dege[d++]);
	
	
 	
 	
	return 0;
}
