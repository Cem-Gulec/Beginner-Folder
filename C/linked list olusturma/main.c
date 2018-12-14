#include <stdio.h>
#include <stdlib.h>

struct n{
 int x[10];
 struct n * next;
};

typedef struct n node;

int main() {
	int i;
	node *root;
	root=(node*)malloc(sizeof(node));
	node *iter;
	iter=root;
	for(i=0;i<4;i++)
	{
		iter=(node*)malloc(sizeof(node));
		iter->x[i]=10*i;
		printf("%d ",iter->x[i]);
		iter=iter->next;
	}
	
	
	
	return 0;
}
