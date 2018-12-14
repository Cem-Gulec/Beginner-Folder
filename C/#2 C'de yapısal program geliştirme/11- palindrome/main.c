#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int sayi, ters = 0, n;
 
   printf("sayi gir:");
   scanf("%d",&sayi);
 
   n = sayi;
 
   while( n != 0 )
   {
      ters = ters * 10;
      ters = ters + n%10;
      n = n/10;
   }
 
   if ( sayi == ters )
      printf("%d palindrome", sayi);
   else
      printf("%d palindrome deðil", sayi);
	
	system("pause");
	return 0;
}
