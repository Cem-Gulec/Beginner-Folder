#include <stdio.h>
#include <stdlib.h>



int main() 
{
	char name,surname;
	int dollar,quarter,dime,nickle,pennies;
	int total_dollar,total_cents;
	
	printf("Please enter your name and surname:");
	scanf("%c%c",&name,&surname);
	printf("\nHow many dollars you have:");
	scanf("%d",&dollar);
	printf("\nHow many quarters you have:");
	scanf("%d",&quarter);
	printf("\nHow many dimes you have:");
	scanf("%d",&dime);
	printf("\nHow many nickles you have:");
	scanf("%d",&nickle);
	printf("\nHow many pennies you have:");
	scanf("%d",&pennies);
	
	total_cents= dollar*100 + quarter*25 + dime*10 + nickle*5 + pennies;
	total_dollar=total_cents/100;
	
	printf("%c.%c \n",name,surname);
	printf("Your total dollars: %d\n",total_dollar);
	printf("Your total coins: %d",total_cents%100);
	
	
	system("pause");
	return 0;
}
