#include <stdio.h>
#include <stdlib.h>

void yazdir(const char*sptr)
{
	for(;*sptr!='\0';sptr++)
	printf("%c",*sptr);
}

int main() {
	char string[]="string karakterleri yaz";
	printf("string:\n");
	yazdir(string);
	
	return 0;
}
