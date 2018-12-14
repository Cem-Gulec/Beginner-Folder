#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int yil, sayac;
    double miktar, anapara = 1000.0, oran=0.5;
 
    for(sayac=5;sayac<=10;sayac+=1){
        printf("Yuzde %d faiz orani icin : \n\n", sayac);
        printf("%4s%21s\n", "Yil", "Depozito Miktari\n");
 
        for(yil=1;yil<=10;yil++){
            miktar = anapara * pow(1.0+oran,yil);
            printf("%3d%21.2f\n\n",yil,miktar);
        }
        oran+=0.1;
    }
   getch();
	return 0;
}
