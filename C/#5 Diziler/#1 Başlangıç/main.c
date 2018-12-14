#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	int n[10],i,j;
 	for(i=0;i<9;i++)
 	{
		j=rand()%6;
		n[i]=j; 	
	 	
	 }
 	printf("%s%13s\n","Eleman","Deger");
 	for(i=0;i<9;i++)
 	printf("%7d%13d\n",i,n[i]);
 	
 	system("pause");
	return 0;
}
