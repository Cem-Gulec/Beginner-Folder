#include <stdio.h>
#include <stdlib.h>
#define MAX 11

int array[MAX]={0};
int link[MAX]={0};
int R=10;

int hash(int key)
{
	int d= key % MAX;
	if(array[d]!=0)
	{
		link[d]=R;
		array[R]=key;
		do{
			R--;
		}while(array[R]!=0);
							
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
		printf("%d-> %d\n",array[i],link[i]);
	
	return 0;
}
