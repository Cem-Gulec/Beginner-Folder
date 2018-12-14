#include <stdio.h>
#include <stdlib.h>


//buyukten kucuge
int main()
 {
 	int k,i,j;
 	int a[5]={1,15,2,3,20};
 	for(i=0;i<5;i++)
 	{
 		for(j=0;j<4;j++)
 		{
 			if(a[j] < a[j+1])
 			{
 				k=a[j+1];
 				a[j+1]=a[j];
 				a[j]=k;
		 	}
			 
		 }
	 }
	 for(i=0;i<5;i++)
	 printf("%d ",a[i]);
	 
	 
	return 0;
}
