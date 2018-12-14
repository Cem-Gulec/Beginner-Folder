#include <stdio.h>
#include <stdlib.h>


int kare(int y)
{
	return y*y;
}

int main() {
	
	int x,sayac=1;
	for(x=1;x<10;x++)
	{
		printf("%d'in karesi: %d\n",sayac, kare(x));
		sayac++;
	}
	
	
	
	
	
	
	
	system("pause");
	return 0;
}


