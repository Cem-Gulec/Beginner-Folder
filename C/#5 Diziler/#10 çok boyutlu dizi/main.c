#include <stdio.h>
#include <stdlib.h>

void diziyiyazdir(int a[][3])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		printf("%d",a[i][j]);
		printf("\n");
	}
}

int main()
 {
 	int d1[2][3]={{1,2,3},{4,5,6}},
 		d2[2][3]={1,2,3,4,5},
 		d3[2][3]={{1,2},{4}};
 		
 		printf("1.\n");
 		diziyiyazdir(d1);
 		printf("2.\n");
 		diziyiyazdir(d2);
 		printf("3.\n");
 		diziyiyazdir(d3);
 	
 	
 	
	return 0;
}
