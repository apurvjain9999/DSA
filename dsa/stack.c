#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *link;
};
struct stack *top,*temp;
int count=0;
void create();
void push();
void view();
void pop();
void top1();
void count1();
void main()
{
    int ans;
    create();
    do
    {
        printf("\nSelect option\n");
        printf("\n1.Enter data\n2.View Data\n3.Delete Data\n4.View Top Data\n5.View Count\n6.Exit\n");
        scanf("%d",&ans);
        if(ans==1)
        {
            push();
        }
        if(ans==2)
        {
            view();
        }
        if(ans==3)
        {
            pop();
        }
        if(ans==4)
        {
            top1();
        }
        if(ans==5)
        {
            count1();
        }
    }while(ans!=6);
}
void create()
{
    top=NULL;
}
void push()
{
    temp=(struct stack*)malloc(1*sizeof(struct stack));
    printf("\nEnter Data\n");
    scanf("%d",&temp->data);
    if(top==NULL)
    {
        temp->link=NULL;
        top=temp;
    }
    else
    {
        temp->link=top;
        top=temp;
    }
    count++;
}
void view()
{
    if(top==NULL)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            printf("\n%d\n",temp->data);
            temp=temp->link;
        }
    }
}
void pop()
{
    if(top==NULL)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        temp=top;
        printf("\nData Deleted: %d\n",temp->data);
        top=top->link;
        free(temp);
        count--;
    }
}
void top1()
{
    if(top==NULL)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        printf("\nData on Top is %d",top->data);
    }
}
void count1()
{
    printf("\nNumber of elements in Stack is: %d\n",count);
}
