#include <stdio.h>
#include <stdlib.h>


int main()
 {
 	int k,sayac,i;
 	double price,useless,a,b,monthly,toplam=0;
 	a=325;
 	b=325;
 	sayac=1;
 	k=2;
 	
 	
 	
 	while(sayac<=4)
 	{
 		for(i=0;i<=4;i++)
 		{
		 monthly=b+((b*5)/100);
		 b=monthly;
		 
		 
		 }
 		
 		useless=(a*40)/100;
 		price=(a-useless)*30;
 		
 		printf("%d. cow's weight: %3.2lf    price: %3.2lf   5 month laterweight: %3.2lf\n",sayac++,a,price,b);
 		a=a+(k*20);
 		
 		k++;
 		
 	
	 }
	 
	
	
	
	
	
	
	
	  
 	
 	
 	
 	
 	system("pause");
	return 0;
}
