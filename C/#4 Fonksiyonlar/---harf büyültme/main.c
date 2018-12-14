#include <stdio.h>
#include <stdlib.h>

char lowertoupper(ch1)
{
	char ch2;
	if(ch1>='a'&&ch1<='z')
	{
		ch2=ch1-32;       //'A'-'a' = -32
	return ch2;
	}
	else
	ch2=ch1;
	return ch2;
	
}

int main() 
{
	char lower,upper;
	printf("lower case:");
	scanf("%c",&lower);
	
	upper=lowertoupper(lower);
	
	printf("upper case:%c   ",upper);
	
	
	
	system("pause");
	return 0;
}
