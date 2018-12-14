#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int x,istenmeyen;
 	printf("istenmeyen rakam:");
 	scanf("%d",&istenmeyen);
 	
 	for(x=1;x<=10;x++)
 	{
 		if(x==istenmeyen)
 		break;
 		printf("%d ",x);
 		
	 }
	 printf("Donguden x=%d yuzunden cikildi",istenmeyen);
 	system("pause");
	return 0;
}
