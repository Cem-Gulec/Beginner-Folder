#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	int i;
 	unsigned besleme;
 	
 	srand(time(NULL));
 	
 	for(i=1;i<=10;i++)
 	printf("%3d",rand()%6+1);
 	if(i%5==0)
 	printf("\n");
 	
 	
 	system("pause");
	return 0;
}
