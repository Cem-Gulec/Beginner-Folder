#include <stdio.h>
#include <stdlib.h>
#define MAX 11

int array[MAX]={0};

int hash(int key)
{
	int yedek;
	int d= key % MAX;
	if(array[d]==0)	
		array[d]=key;
	else
	{
		if(array[d+(key/MAX)]==0)
			{
				do{
					d=d+(key/MAX);
					if(d>10)
						d=d-11;
				}while(array[d]!=0);
				array[d]=key;
			}
		else
			{
				yedek=array[d];
				array[d]=key;
				do{
					d=d+(yedek/MAX);
					if(d>10)
						d=d-11;
				}while(array[d]!=0);
				array[d]=yedek;
				
			}
			
		
							
	}
	
}


int main() {
	int i;
	
	hash(27);
	hash(18);
	hash(29);
	hash(28);
	hash(39);
	hash(13);
	hash(41);
	
	for(i=0;i<MAX;i++)
		printf("%d\n",array[i]);
	
	return 0;
}
