#include <stdio.h>
#include <stdlib.h>  /*AY SONU FATURA ÝÞLEME SÝSTEMÝ : GEÇ KALINDIÐINDA 30 LÝRA FAZLA ÝÞLER : SABÝT FATURA UCRETÝ 26 TL: KULLANDIÐIN DK KADAR X2*/
#define LATE_CHARGE 30
#define CONSTANT_CHARGE 26
#define USAGEPER 2

double previous,current,unpaid;

void displayinfo(void)
{
	printf("This program calculates your bill charge\n-------------------------------\n");
}

void getdata(void)
{
	printf("previous bill:");
	scanf("%lf",&previous);
	printf("current bill:");
	scanf("%lf",&current);
	printf("unpaid info:");
	scanf("%lf",&unpaid);
}

double calcusecharge()
{
	return (current-previous)*USAGEPER;
}

double calclatecharge()
{
	if(unpaid>0)
	return LATE_CHARGE;
	else
	return 0;
}

double calcbill(double latecharge,double usecharge)
{
	return(latecharge + usecharge + CONSTANT_CHARGE + unpaid);
}

void displayBill(double bill,double latecharge, double usecharge)
{
	printf("Late charge > %.2lf\n",latecharge);
	printf("Use charge >%.2lf\n",usecharge);
	printf("Unpaid info >%.2lf\n",unpaid);
	printf("Bill total >%.2lf\n",bill);
}



int main() 
{
	double bill,latecharge,usecharge;
	
	displayinfo();
	getdata();
	usecharge=calcusecharge();
	latecharge=calclatecharge();
	bill=calcbill(latecharge,usecharge);
	displayBill(bill,latecharge,usecharge);
	
	
	system("pause");
	return 0;
}
