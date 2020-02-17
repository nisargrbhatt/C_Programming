#include<stdio.h>
#include<conio.h>
#define size 5
struct queue{
    int q[size][size];
    int r[size];
    int f[size];
}s;

void insert(int n){
    int val;
    printf("Enter value: ");
    scanf("%d",&val);
    if(s.r[n]==size)
    {
        printf("Overflow");

    }
    else if(s.f[n]==-1)
    {
        s.f[n]=0;
        s.r[n]=0;
        s.q[n][s.r[n]]=val;
        s.r[n]++;
    }
    else{
        s.q[n][s.r[n]]=val;
        s.r[n]++;
    }
}
void delete1(int n){
    if(s.f[n]==-1)
    {
        printf("Underflow");
    }
    else{
            printf("%d is deleted.",s.q[n][s.f[n]]);
        s.f[n]++;
    }
}
void display(){
        int i,j;
        for(i=0;i<size;i++)
        {   printf("The Queue is %d:\n",i);
            for(j=s.f[i];j<s.r[i];j++)
            {
                printf("%d |",s.q[i][j]);
            }
            printf("\n");
        }
}
void main()
{
    int i=0,x,n;
    for(i=0;i<size;i++)
    {
        s.f[i]=-1;
        s.r[i]=-1;
    }
    i=0;
    while(i==0)
    {
        printf("1.Insert\n2.Delete\n3.Diplay\n4.exit\n");
        scanf("%d",&x);
        switch(x){
        case 1:printf("Enter Your Priority Of element: \n");
                    scanf("%d",&n);
                    insert(n);
                    break;
        case 2: printf("Enter Your Priority Of element: \n");
                    scanf("%d",&n);
                    delete1(n);
                    break;
        case 3:display();break;
        case 4:i=1;
        }
    }
    getch();

}
