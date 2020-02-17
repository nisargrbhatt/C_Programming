#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *ptr;
}*front,*rear,*temp,*front1;

int count=0;

void enq()
{
    int data;
     printf("Enter data : ");
    scanf("%d", &data);
    if (rear == NULL)
    {
        rear = (struct node *)malloc(sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
        printf("The %d is added to queue.",rear->info);
    }
    else
    {
        temp=(struct node *)malloc(sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;

        rear = temp;
        printf("The %d is added to queue.",rear->info);
    }
    count++;
}

void deq()
{
    front1 = front;

    if (front1 == NULL)
    {
        printf("\nUnderflow  ");
        return;
    }
    else if (front1->ptr != NULL)
    {
            front1 = front1->ptr;
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = front1;
    }
    else
    {
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
    }
        count--;
}

void display()
{
     front1 = front;

    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf(" %d ||", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf(" %d ||", front1->info);
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch){
                            case 1: enq();
                                        break;
                            case 2: deq();
                                        break;
                            case 3: display();
                                        break;
                            case 4: exit(0);
                            default:    printf("Wrong Choice!!!!");

        }
    }
}
