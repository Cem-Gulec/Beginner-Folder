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
	int i, j;
	char c;
	char exp[100];
	char tut[100];

	printf("enter an expression");
	scanf("%s", &exp);

	for (i = 0, j = 0; exp[i] != '\0'; i++)   //(a+b)*c
	{
		if ((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z'))
		{
			tut[j] = exp[i];
			j++;
		}
		else if (exp[i] == '(')
			continue;

		else if (exp[i] == ')')
		{
			c = pop();
			tut[j] = c;
			j++;
		}
		else
			push(exp[i]);

	}

	while (top != 0) {
		tut[j] = pop();
		j++;
	}
	tut[j] = '\0';

	for (j = 0; tut[j] != '\0'; j++) {
		printf("%c", tut[j]);
	}

	printf("\n");

	system("pause");
	return 0;
}
