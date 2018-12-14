#include <stdio.h>
#include <stdlib.h>



int main()
 {
	int s1,s2;
	printf("ilk sayiyi gir:");
	scanf("%d",&s1);
	printf("diðer sayiyi gir:");
	scanf("%d",&s2);
	
	if(s1>s2)
	printf("%d büyüktür %dden",s1,s2);
	
	if(s1<s2)
	printf("%d küçüktür %dden",s1,s2);
	
	if(s1==s2)
	printf("%d eþittir %dye",s1,s2);
	
	system("pause");
	
}
