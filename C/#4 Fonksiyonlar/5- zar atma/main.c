#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,i,yuz;
	
	for(i=1;i<=600;i++)
	{
		yuz=1+rand()%6;
		switch(yuz)
		{
			case 1:
				f1++;
				break;
				
			case 2:
				f2++;
				break;
				
			case 3:
				f3++;
				break;
				
			case 4:
				f4++;
				break;
				
			case 5:
				f5++;
				break;
				
			case 6:
				f6++;
				break;
		}
	}
	
	
	
	
	printf("%7s%25s\n","yuz","frekans");
	printf("Toplamda gelen 1: %15d\nToplamda gelen 2: %15d\nToplamda gelen 3: %15d\nToplamda gelen 4: %15d\nToplamda gelen 5: %15d\nToplamda gelen 6: %15d",f1,f2,f3,f4,f5,f6);
	system("pause");
	return 0;
}
