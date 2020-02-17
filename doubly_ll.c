#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct node{
    int data;
    struct node *before;
    struct node *next;
}*start=NULL,*q,*t,*t1,*t2;

void insert_beg()
{
     int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    t->data=num;
    t->next=NULL;
    t->before=NULL;
    if(start==NULL)
    {
        start=t;
        t1=start;
    }
    else{
        t->next=start;
        start->before=t;
        start=t;
    }
}

void insert_end()
{
     int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    t->data=num;
    t->next=NULL;
    t->before=NULL;
     if(start==NULL)
    {
        start=t;
        t1=start;
    }
    else{
        t1->next=t;
        t->before=t1;
        t1=t;
    }
}

void display()
{
    if(start==NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        q=start;
        printf("The linked list is:\n");
        while(q!=NULL)
        {
            printf("%d->",q->data);
            q=q->next;
        }
    }
}

void delete_end()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=start;
        while(q->next->next!=NULL)
        q=q->next;

        t=q->next;
        q->next=NULL;
        printf("Deleted element is %d",t->data);
        free(t);
    }
}

void delete_beg()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=start;
        start=start->next;
        printf("Deleted element is %d",q->data);
        start->before=NULL;
        free(q);
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n1.Insert at beginning\n2.Insert at end\n3.Display\n4.Exit\n5.Delete from begining\n6.Delete from end\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:insert_beg();
                        break;
            case 2:insert_end();
                        break;
            case 3:display();
                        break;
            case 4:exit(0);
            case 5:delete_beg();
                        break;
            case 6:delete_end();
                        break;
            default:printf("Wrong Choice!!!");
        }
    }
}
