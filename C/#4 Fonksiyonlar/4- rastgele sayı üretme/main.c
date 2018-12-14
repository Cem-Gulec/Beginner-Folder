#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int i;
	for(i=0;i<=50;i++)
	{
		printf("%5d",rand()%15+1);
		if(i%5==0)
		printf("\n");
	}
	
	
	system("pause");
	return 0;
}
