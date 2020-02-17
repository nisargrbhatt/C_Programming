#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define SIZE 50
struct stack{
    int top;
    char s[SIZE];


}a;
void push(char elem)
{
    a.s[++a.top]=elem;
}

char pop()
{
    return(a.s[a.top--]);
}

int pr(char elem)
{
    switch(elem)
    {
    case '#': return 0;
    case '(': return 1;
    case '+':
    case '-': return 2;
    case '*':
    case '/': return 3;
    }
}

int main()
{
    char infx[50],pofx[50],ch,elem;
    int i=0,k=0;

    a.top=-1;
    printf("\n\nRead the Infix Expression ? ");
    scanf("%s",infx);
    push('#');
    while( (ch=infx[i++]) != '\0')
    {
    if( ch == '(') push(ch);
    else
    if(isalnum(ch)) pofx[k++]=ch;
      else
    if( ch == ')')
    {
        while( a.s[a.top] != '(')
      pofx[k++]=pop();
        elem=pop();
    }
    else
    {
        while( pr(a.s[a.top]) >= pr(ch) )
      pofx[k++]=pop();
        push(ch);
    }
    }
    while( a.s[a.top] != '#')
  pofx[k++]=pop();
    pofx[k]='\0';
    printf("\n\nGiven Infix Expn: %s \nPostfix Expn: %s\n",infx,pofx);
    getch();
    return 0;
}
