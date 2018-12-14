#include<stdio.h>
#include<stdlib.h>

char stack[100];
int top = 0;

void push(char symb)
{
	stack[top] = symb;
	top++;
}

char pop()
{
	--top;
	return stack[top];
}

int main() {
	int i,x,y;
	char exp[100];

	printf("enter an expression");
	scanf("%s", &exp);

	for (i=0; exp[i] != '\0'; i++)   
	{
		if (exp[i] == '(')
		{
			push(exp[i]);
			x=i;
		}

		else if (exp[i] == ')')
		{
			pop();
			y=i;
		}
		

}
	if((top==0) && (y>x))
	printf("balanced");
	else
	printf("not balanced");
			
	for (i=0; exp[i] != '\0'; i++)   
	{
		printf("%c",stack[i]);
	}
	system("pause");
	return 0;
}
