#include <stdio.h>
#include <stdlib.h>
#define GALLONS1000 1.10
#define LATE_CHARGE 2
#define DEMAND_CHARGE 35

double previous,current,unpaid;

void displayINFO(void)
{
	printf("water bill calculating program \n----------------------------\n");
}

void getData(void)
{
	printf("Enter previous:");
	scanf("%lf",&previous);
	printf("Enter current:");
	scanf("%lf",&current);
	printf("Enter unpaid:");
	scanf("%lf",&unpaid);
}

double calcusecharge()
{
	return (current-previous)*GALLONS1000;
	
}

double calclatecharge()
{
	if(unpaid>0)
	return LATE_CHARGE;
	else
	return 0;
}

double calcBill(double latecharge, double usecharge)
{
	return (usecharge + latecharge + unpaid + DEMAND_CHARGE);
}

void displayBill(double bill,double latecharge,double usecharge)
{
	printf("use charge > %.2f\n",usecharge);
	printf("late charge > %.2f\n",latecharge);
	printf("Demand charge > %.2f\n",DEMAND_CHARGE);
	printf("Unpaid >%.2f\n---------------------\n",unpaid);
	printf("Bill total >%.2f",bill);
	
}

int main() {
	
	double bill,latecharge,usecharge;
	
	displayINFO();
	getData();
	latecharge=calclatecharge();
	usecharge=calcusecharge();
	bill=calcBill(latecharge,usecharge);
	displayBill(bill,latecharge,usecharge);
	
	
	
	
	
	
	system("pause");
	return 0;
}


