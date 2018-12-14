#include <stdio.h>
#include <stdlib.h>

int horiz=0,var;

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

int bul(node *agac,char x){
	
		if(agac!=NULL)
		{
			horiz++;
			if(agac->info==x){
				var=1;
				return horiz;
			}
			
			else{
				if(var!=1) 
					bul(agac->left,x);
				if(var!=1) 
					bul(agac->right,x);
				if(var!=1)
					horiz--;
			}
		}
}

int main() 
{
	
	node * agac=NULL;
	agac=ekle(agac,'j');
	agac=ekle(agac,'f');
	agac=ekle(agac,'k');
	agac=ekle(agac,'a');
	agac=ekle(agac,'h');
	agac=ekle(agac,'z');
	printf("level %d",bul(agac,'j'));
	return 0;
}