#include <stdio.h>
#define KMS_PER_MILE 1.609



int main(void)
 {
 	double miles,kms;
 	
 	printf("Enter the distance in miles");
 	scanf("%lf",&miles);
 	
 	kms= KMS_PER_MILE * miles;
 	
 	printf("that equals %lf kilometers",kms);
 	
 	
 	system("pause");
	return 0;
}
