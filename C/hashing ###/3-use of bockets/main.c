#include <stdio.h>
#include <stdlib.h>
#define MAX 11

int array[MAX]={0};
int array2[MAX]={0};

int hash(int key)
{
	int d= key % MAX;
	if(array[d]!=0)
	{
		array2[d]=key;					
	}
	else	
	array[d]=key;
}


int main() {
	int i;
	
	hash(27);
	hash(18);
	hash(29);
	hash(28);
	hash(39);
	hash(13);
	hash(16);
	
	
	for(i=0;i<MAX;i++)
		printf("%d\t%d\n",array[i],array2[i]);

	
	return 0;
}
