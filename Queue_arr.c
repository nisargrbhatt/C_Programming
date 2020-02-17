#include <stdio.h>

#define MAX 50

struct queue{
int queue_array[MAX];
int rear;
int front;
}s;

void insert()
{
    int add_item;
    if (s.rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (s.front == - 1)
        s.front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        s.rear = s.rear + 1;
        s.queue_array[s.rear] = add_item;}
    }


void delete1()
{
    if (s.front == - 1 || s.front > s.rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", s.queue_array[s.front]);
        s.front = s.front + 1;
    }
}

void display()
{
    int i;
    if (s.front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = s.front; i <= s.rear; i++)
            printf("%d ", s.queue_array[i]);
        printf("\n");
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
    display();
    getch();
}

