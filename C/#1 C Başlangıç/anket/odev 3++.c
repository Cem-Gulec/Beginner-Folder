#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i,j,k,num;
   char array[10][10][10];
   
   for (i=1;i<4;i++)
   for (j=1;j<4;j++)
   for (k=1;k<4;k++)
   array[i][j][k] = 0;
   
j = 1; k = 1;
printf("number of persons");
scanf("%d",&num);
for(i=1;i<=num;i++){
printf("\n*person%d*\n",i);

printf("\nWhat is the genre of the person?\n");
printf("a)Male b)Female\n");
scanf(" %c",&array[i][j][k]);

printf("\nWhat is your education level?\n");
printf("a)Primary School b)High School c)University\n");
scanf(" %c",&array[i][j+1][k+1]);

printf("\nWhat is your best foreign language?\n");
printf("a)English b)German c)French\n");
scanf(" %c",&array[i][j+2][k+2]);
}

for(i=1, j=1, k=1;i<=num;i++){
printf("Person%d",i);
printf("\tQuestion%d ",j);
printf(" %c",array[i][j][k]);
printf("\tQuestion%d ",j+1);
printf(" %c",array[i][j+1][k+1]);
printf("\tQuestion%d ",j+2);
printf(" %c\n",array[i][j+2][k+2]);
}


	return 0;
}
