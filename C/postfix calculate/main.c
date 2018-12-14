#include<stdio.h>
#include<stdlib.h>

int stack[100];
int top=0;

void push(int num)
{
	stack[top]=num;
	top++;
}

int pop()
{
	--top;
	return stack[top];
}

int main() {
	int a,b,c,i,numb;
	char exp[100];
	
	printf("enter an expression");
	scanf("%s",&exp);
	
	for(i=0;exp[i]!='\0';i++)
	{
		if(!isdigit(exp[i]))
		{
			a=pop();	b=pop();
			switch(exp[i])
			{
				case '+': c=a+b; break;
				case '-': c=a-b; break;
				case '*': c=a*b; break;
				case '/': c=a/b; break;
			}
			push(c);
		}
		else
		{
			numb=exp[i]-48;
			push(numb);
		}
	}
	printf("result:%d\n",pop());

	
	system("pause");	
	return 0;
}
