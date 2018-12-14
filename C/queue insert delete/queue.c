#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 4

int queue[MAX];
int front=0,rear=-1,itemCount=0;

int isEmpty() {
   if(itemCount==0)
   return 1;
   return 0;
}

int isFull() {
   if(itemCount==MAX)
   return 1;
   return 0;
} 

void insert(int data) {

   if(!isFull()) {
	
      if(rear == MAX-1) {
         rear = -1;            
      }       

      queue[++rear] = data;
      itemCount++;
   }
}

int removeF() {
   int a = queue[front++];
	
   if(front == MAX) {
      front = 0;
   }
	
   itemCount--;
   return a;  
}

int main() {

   int i,num;
   char decision;
   insert(1);
   insert(15);
   insert(3);
   insert(4);
   printf("Queue:\n");
	for(i=0;i<MAX;i++)
	{
		printf("%d ",queue[i]);
	}
   if(isFull()){
      printf("Queue is full\t--Do you want to delete(y/n)");  
      scanf("%c",&decision);
      if(decision=='y')
	  printf("Element removed: %d\n",removeF());
	  else if(decision=='n')
	  {
	  	printf("OK then\n");
	  }
   }
   insert(2);
 	  while(!isEmpty()) {     
      printf("%d ",removeF());
   }
    
}
