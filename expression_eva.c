#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

char postfix[50];
char stack[50];
int tos=-1;
int j=-1;
float ans=0;

void push(char a){
        j++;
        stack[j]=a;
}
void pop()
{
    stack[j]='\0';
    j--;

}
void opratorch(char b)
{ int x=j,y=j-1;
    switch(b)
    {
    case '+':

        ans=ans+(float)stack[x]+(float)stack[y];
        pop();
        pop();
        push(ans);
        break;

    case '-':

        ans=ans+(float)stack[x]-(float)stack[y];
        pop();
        pop();
        push(ans);
        break;
    case '*':

        ans=ans+(float)(stack[x])*(float)stack[y];
        pop();
        pop();
        push(ans);
        break;
    case '/':

        ans=ans+(float)(stack[x])/(float)(stack[y]);
        pop();
        pop();
        push(ans);
        break;
        }

}





void main()
{
    int i;
        printf("Enter Postfix Exp: ");
        for(i=0;i<3;i++)
        {
            scanf("%s",&postfix[i]);
        }

        for(i=0;i<strlen(postfix);i++)
        {
            if(isalnum(postfix[i]) )
            {
                push(postfix[i]);
            }
            else{
                    opratorch(postfix[i]);
            }


        }
        printf("%f",ans);

}
