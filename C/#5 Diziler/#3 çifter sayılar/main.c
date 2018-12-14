#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	int n[10];
 	int i,j,s=2;
 	
 	for(i=0;i<9;i++)
 	{
 		n[i]=s;
 		s=s*2;
 		
	 }
	 
	 printf("%s%10s\n","Eleman","Deger");
	 for(j=0;j<9;j++)
	 printf("%d%11d\n",j,n[j]);
	return 0;
}
