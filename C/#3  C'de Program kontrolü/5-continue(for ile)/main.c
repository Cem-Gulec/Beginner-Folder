#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	int x,istenmeyen;
 	printf("istenmeyen rakam nedir:");
 	scanf("%d",&istenmeyen);
 	
 	for(x=1;x<=10;x++)
 	{
 		if(x==istenmeyen)
 		continue;
 		printf("%d ",x);
 		
	 }
 	
 	printf("continue , %d degerinin atlanmasi icin kullanildi.",istenmeyen);
 	
 	system("pause");
	return 0;
}
