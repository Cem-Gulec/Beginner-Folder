#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	int i;
 	char string[20];
 	printf("string gir:");
 	scanf("%s",string);
 	
 	for(i=0;string[i]!='\0';i++)
 	printf("%c ",string[i]);
 	
	return 0;
}
