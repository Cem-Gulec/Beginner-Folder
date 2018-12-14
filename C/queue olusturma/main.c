#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX];
int rear=-1,front=0;

void insert(int a)
{
	if(rear == MAX-1) {
         rear = -1;  
		 front++;          
      }       
	queue[++rear]=a;
}


int main(int argc, char *argv[]) {
	int i,num;
	
	for(i=0;i<MAX;i++)
	{
		printf("enter a number");
		scanf("%d",&num);
		insert(num);
	}
	
	for(i=0;i<MAX;i++)
	printf("%d ",queue[i]);
	
	insert(13);
	printf("\n");
	for(i=0;i<MAX;i++)
	printf("%d ",queue[i]);
	
	return 0;
}
