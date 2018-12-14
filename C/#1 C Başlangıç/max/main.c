#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	int i;
	int array[6]={0,4,21,89,1,5};
	int max=array[0];
	
		for(i=0;i<6;i++)
			if(max<array[i])
			 max=array[i];
			 
			 printf("max value: %d",max);
	return 0;
}
