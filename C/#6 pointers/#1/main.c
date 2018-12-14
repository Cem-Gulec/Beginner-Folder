#include <stdio.h>
#include <stdlib.h>


//gösterici operatörler (baþlangýç)
int main(int argc, char *argv[]) 
{
	int *yptr,y=5;
	yptr=&y;
	printf("%d",*yptr);
	return 0;
}
