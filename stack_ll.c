#include<stdio.h>
#include<conio.h>
#include<process.h>

struct node
{
    int data;
    struct node *next;
}*start=NULL,*q,*t,*top;
int count=0;
void push()
{
    int num;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    t->data=num;
    t->next=NULL;

    if(start==NULL)
    {
        start=t;
        top=start;
        count++;
    }
    else
    {
        q=start;
        while(q->next!=NULL)
        q=q->next;
        q->next=t;
        top=q;
        count++;
    }
}

void pop()
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
        top=q;
        count--;
        printf("Deleted element is %d",t->data);
        free(t);
    }
}

int display()
{
    int arr[count];int i=0;
    if(start==NULL)
    {
        printf("List is empty!!");
        return 0;
    }
    else
    {
        q=start;

        while(q!=NULL)
        {
            arr[i]=q->data;
            i++;
            q=q->next;
        }
    }
    printf("The Stack is :\n");
    for(i=count-1;i>=0;i--)
    {

        printf("%d  || ",arr[i]);
    }
}

int main()
{
    int ch;
    while(1)
    {

        printf("\n1.PUSH\n2.Display\n3.POP\n4.Exit\n\n");

        scanf("%d",&ch);

        switch(ch)
        {
            case 1:push();
                                break;


            case 2: display();
                    break;

            case 3:pop();
                        break;

            case 4: exit(0);
                    default: printf("Wrong Choice!!");
        }
    }
    return 0;
}
