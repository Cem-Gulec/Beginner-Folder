#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//sabit olmayan veriyi g�stere sabit olmayan g�sterici kullanarak b�y�k harfe �evirme
void cevir(char *sptr)
{
	while(*sptr!='\0')
	{
		if(islower(*sptr))
		*sptr=toupper(*sptr);
		++sptr;
	}
}

int main() 
{
	char string[]="karakterler ve #88.90";
	printf("ilk hal:\t%s\n",string);
	cevir(string);
	printf("yeni hal:\t%s\n",string);
	return 0;
}
