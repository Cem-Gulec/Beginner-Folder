#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int max,min,sum=0;
	int i=1,a;
	
	while(i<=5)
	{
		printf("Enter %d. number",i);
		scanf("%d",&a);
		if(i==1)
		{
			max=a;
			min=a;
		}
		if(a>max)
		max=a;
		if(a<min)
		min=a;
		sum+=a;
		i++;
		
		printf("smallest:%d      greatest:%d\n",min,max);
	}
	
	system("pause");
	return 0;
}
