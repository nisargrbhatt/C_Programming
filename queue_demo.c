#include<conio.h>
#include<iostream>
#include<stdio.h>
#define max 5
struct queue {
       int queue[max];
       int front;
       int rear;
}s;
void insert()
{
    int element;
    if(s.rear==max)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter Element:");
        scanf("%d",&element);
        s.queue[s.rear++]=element;
        printf("\n %d Enqueued at %d",element,s.rear);
    }
 
}
void delete1()
{
    if(s.rear==s.front)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        s.front++;
        printf("\nElement is Dequeued from %d",s.front);
    }
    
}
void display()
{
    int i;
    if(s.front==s.rear)
    {
        printf("\nQueue is Empty!!!");
    }
    else
    {
        printf(" \n");
        for(i=s.front;i<max;i++)
        {
            printf(" | %d ",s.queue[i]);
        }
            printf("|");
    }
}
int main()
{
 int ch,i=0;
 s.front=0;
 s.rear=0;
 
 do
 {
    printf("\n1.INSERT \n2.DELETE \n3.DISPLAY \n4.EXIT");
    printf("\nEnter your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1: insert();
    break;
    case 2: delete1();
    break;
    case 3: display();
    break;
    case 4: i=1;
    break;
    default:printf("\n Please enter a valid choice!!");
    }
 }while(i==0);
          return 0;
}
 
