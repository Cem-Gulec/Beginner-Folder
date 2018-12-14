#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int a=3,i,j;
 	
 	for(i=0; i<5; i++)
 	{
 		for(j=0;j<4;j++)
 		{
 			printf("%d\t",a);
 			a=a+2;	
		 }
		 printf("\n");
		 a=a-5;
		 
		 
	 }
 	
 	system("pause");
	return 0;
}
