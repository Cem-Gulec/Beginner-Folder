#include <stdio.h>
#include <stdlib.h>



int main()
 {
	int s1,s2;
	printf("ilk sayiyi gir:");
	scanf("%d",&s1);
	printf("di�er sayiyi gir:");
	scanf("%d",&s2);
	
	if(s1>s2)
	printf("%d b�y�kt�r %dden",s1,s2);
	
	if(s1<s2)
	printf("%d k���kt�r %dden",s1,s2);
	
	if(s1==s2)
	printf("%d e�ittir %dye",s1,s2);
	
	system("pause");
	
}
