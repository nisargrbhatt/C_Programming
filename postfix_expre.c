#include<stdio.h>
#include<ctype.h>
#define max 100
#define size 100

 int stack[max];
 int top = -1 ;

 void push(int item)
 {

	 if(top >= max -1)
	 {
		 printf("stack over flow");
		 return;
	 }
	 else
	 {
         top++;
        stack[top]= item;
	 }
 }

 int pop()
 {
	 int item;
	 if(top <0)
	 {
		printf("stack under flow");
	 }
	 else
	 {
		 item = stack[top];
		 top--;
		 return item;
	 }
 }

 void operator_ex(char postfix[])
 {

	int i ;
	char ch;
	int val;
	int A, B ;



	for (i = 0 ; postfix[i] != '#'; i++)
	{
		ch = postfix[i];
		if (isdigit(ch))
		{
			push(ch - '0');
		}
		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			A = pop();
			B = pop();

			switch (ch)
            {
				case '*':
				val = B * A;
				break;

				case '/':
				val = B / A;
				break;

				case '+':
				val = B + A;
				break;

				case '-':
				val = B - A;
				break;
			}

			push(val);
		}
	}
	printf( " \n Result of expression evaluation : %d \n", pop()) ;
 }

 int main()
 {

	int i ;

	char postfix[size];
	printf("If you want to stop entering press #");
	printf( " \nEnter postfix expression:\n");

	for (i = 0 ; i <= size - 1 ; i++)
	{
	   scanf("%c", &postfix[i]);
	    if ( postfix[i] == '#' )
		{
		    break;
        }
	}
	operator_ex(postfix);
    return 0;
 }
