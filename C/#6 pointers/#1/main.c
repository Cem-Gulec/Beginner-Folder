#include <stdio.h>
#include <stdlib.h>


//g�sterici operat�rler (ba�lang��)
int main(int argc, char *argv[]) 
{
	int *yptr,y=5;
	yptr=&y;
	printf("%d",*yptr);
	return 0;
}
