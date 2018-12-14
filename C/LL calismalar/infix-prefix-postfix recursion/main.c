#include <stdio.h>
#include <stdlib.h>

struct n{
 char info;
 struct n * left;
 struct n * right;
};
typedef struct n node;

node * ekle(node *agac,char x)
{
	if(agac==NULL)
	{
		node * root=(node *)malloc(sizeof(node));
		root->left=NULL;
		root->right=NULL;
		root->info=x;
		return root;
	}
	if(agac->info<x)
	{
		agac->right=ekle(agac->right,x);
		return agac;
	}
	agac->left=ekle(agac->left,x);
	return agac;
}

void infix(node *agac){
	if(agac==NULL)
	return;
	
	dolas(agac->left);
	printf("%c ",agac->info);
	dolas(agac->right);
}

void prefix(node *agac){
	if(agac==NULL)
	return;
	
	printf("%c ",agac->info);
	dolas(agac->left);
	dolas(agac->right);
}

void postfix(node *agac){
	if(agac==NULL)
	return;
	
	dolas(agac->left);
	dolas(agac->right);
	printf("%c ",agac->info);

}

int main() 
{
	node * agac=NULL;
	agac=ekle(agac,'j');
	agac=ekle(agac,'f');
	agac=ekle(agac,'k');
	agac=ekle(agac,'a');
	agac=ekle(agac,'h');
	dolas(agac);
	return 0;
}
