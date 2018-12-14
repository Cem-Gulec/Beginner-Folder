#include <stdio.h>
#include <stdlib.h>
#define PI 3.14


int main() 
{
	double d1,d2,unit_weight,thickness,N;
	double rim_area,volume,weight,total_weight;
	
	printf("Enter the #1 diameter:");
	scanf("%lf",&d1);
	printf("Enter the #2 diameter:");
	scanf("%lf",&d2);
	printf("Enter the unit weight:");
	scanf("%lf",&unit_weight);
	printf("Enter the thickness:");
	scanf("%lf",&thickness);
	printf("Enter the quantity :");
	scanf("%lf",&N);
	
	rim_area=(PI*pow(d1/2,2))-(PI*pow(d2/2,2));
	volume=thickness*rim_area;
	weight=volume*unit_weight;
	total_weight=N*weight;
	
	printf("Total weight : %lf",total_weight);
	
	
	
	
	system("pause");
	return 0;
}
