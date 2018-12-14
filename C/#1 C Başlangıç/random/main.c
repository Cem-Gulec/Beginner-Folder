#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() 
{
	
	
	
	time_t t;
	int i,guess,number;
	char answer;
	srand((unsigned)time(&t));
	
	while(1)
	{
		number=rand()%10;
		printf("random generator number is %d\n",number);
		i=1;
		while(i<4)
		{
			printf("Enter your %d. guess",i);
			scanf("%d",&guess);
			if(guess==number)
			{
				printf("correct answer\n");
				break;
			}
			i++;
		}
		
		if(i==4)
		printf("time is up\n");
		
		
		fflush(stdin);
		printf("do you want to play again:");
		scanf("&c",&answer);
		if((answer=='N') ||(answer=='n')) 
		break;
		
		system("cls");
	}
	
	
	system("pause");
	return 0;
}
