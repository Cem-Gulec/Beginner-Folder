#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])
 {
 	int i=0,j=8,temp;
 	int array[9]={1,5,8,12,31,42,57,65,81};
 	
 			while (i < j) {
      	temp = array[j];
     	 array[j] = array[i];
      	array[i] = temp;
     	 i++;  j--;           
   }
	
	for(i=0;i<9;i++)
 		printf("%d ",array[i]);	 
		 
	return 0;
}
