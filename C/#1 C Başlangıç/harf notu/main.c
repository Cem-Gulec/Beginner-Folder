#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int stdnum,num,j,i;
	char grades[]={'F','F','F','F','F','F','D','C','B','A','A'};
	printf("enter the student number");
	scanf("%d",&stdnum);
	
	for(i=0; i<stdnum; i++)
	{
		printf("enter you number:");
		scanf("%d",&num);
		j=num/10;
		printf("your grade is %c\n",grades[j]);	
	}
	return 0;
}
