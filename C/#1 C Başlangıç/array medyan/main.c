#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

int main(int argc, char *argv[])
 {
 	int i,j,counter,medyan;
 	int array[SIZE]={1,8,2,13,21,6,18,22,17};
 	
 	for(i=0;i<SIZE;i++)
 	{
 		for(j=0;j<SIZE;j++)
 		{
 			if(array[i]<array[j])
 			counter++;
		 }
		 	if(counter==(SIZE/2))
 			medyan=array[i];
 			counter=0;
			 }
 	printf("%d",medyan);
 	
	return 0;
}
