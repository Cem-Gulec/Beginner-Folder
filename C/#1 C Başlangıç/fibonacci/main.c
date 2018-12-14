#include <stdio.h>
#include <stdlib.h>

int fibonacci(int a,int b,int n)
{
	int c=a+b;
	if(a==0 && b==0)
	return 0;
	
	if(c<n)
	{
		printf("%d ",c);
		a=b; b=c; c=fibonacci(a,b,n);
	}
	
}



int main(int argc, char *argv[])
 {
 	int x,y,max;
 	printf("max:");
 	scanf("%d",&max);
 	printf("baslangic sayilari:");
 	scanf("%d%d",&x,&y);
 	fibonacci(x,y,max);
 	
 	
 	system("pause");
	return 0;
}
