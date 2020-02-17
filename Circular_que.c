#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5

struct cir_que{
    int front;
    int rear;
    int cirque[max];
}s;

void insert()
{
    int a;
    if(s.rear == max -1 && s.front == 0)
    {
        printf("Queue Overflow");
    }
    else if(s.rear ==-1 && s.front == -1)
    {
        s.rear = 0;
        s.front=0;
        printf("Enter value:");
        scanf("%d",&a);
        s.cirque[s.rear] = a;
        s.rear++;
    }
    else if(s.rear < s.front)
    {
        s.rear = 0;
        s.front=0;
        printf("Enter value:");
        scanf("%d",&a);
        s.cirque[s.rear] = a;
        s.rear++;

    }
    else if(s.rear== max-1 && s.front != 0)
    {
        s.rear =0;
        printf("Enter value:");
        scanf("%d",&a);
        s.cirque[s.rear]=a;
        s.rear++;

    }
    else
    {
        printf("Enter value:");
        scanf("%d",&a);
        s.cirque[s.rear]=a;
        s.rear++;
    }

}
void delete1()
{
    if (s.front == - 1)
    {
        printf("Queue Underflow \n");
    }
    else if(s.front == s.rear)
    {
        s.rear=0;
        s.front=0;
    }
    else if(s.front == max-1 && s.rear !=0)
    {
        s.front=0;
    }
    else{
        s.front++;
        if(s.front>s.rear)
        {
            s.rear=-1;
            s.front=-1;
        }
    }

}
void display()
{
    int i;

    for (i=0;i<max;i++)
    {
        printf("%d || ",s.cirque[i]);
    }

}
void main()
{

    int choice;
    s.rear =-1;
    s.front = -1;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete1();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        }
    }

    getch();
}

