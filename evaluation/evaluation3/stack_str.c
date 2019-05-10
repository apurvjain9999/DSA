#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int data;
    struct stack *link;
};
struct stack *first=NULL,*top=NULL,*temp,*t;
void push();
void pop();
void display();

int main()
{
    int ans;
    do
    {
        printf("\nSelect Option\n");
        printf("\n1.Push Data\n2.Pop Data\n3.Display Data\n4.Exit\n");
        scanf("%d",&ans);
        switch(ans)
        {
            case 1:
                {
                    push();
                    ans=1;
                }
            break;
            case 2:
                {
                    pop();
                    ans=1;
                }
            break;
            case 3:
                {
                    display();
                    ans=1;
                }
            break;
            case 4: printf("\nThank You\n");
            break;
            default: printf("\nTry Again!");
        }
    }while(ans!=4);
    return 0;
}
void push()
{
    temp=(struct stack*)malloc(1*sizeof(struct stack));
    printf("\nEnter data\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(first==NULL)
    {
        first=temp;;
        top=first;
    }
    else
    {
        top->link=temp;
        top=temp;
    }
}
void pop()
{
    if(top==NULL)
    {
        printf("\nUnderflow\n");
        printf("\nStack is Empty\n");
    }
    else
    {
        if(first->link==NULL)
        {
            temp=first;
            printf("\nValue Deleted %d\n",temp->data);
            free(temp);
            first=NULL;
            top=NULL;
        }
        else
        {
            t=first;
            while(t->link->link!=NULL)
            t=t->link;
            temp=top;
            printf("\nValue Deleted %d\n",temp->data);
            free(temp);
            t->link=NULL;
            top=t;
        }

    }
}
void display()
{
    if(top==NULL)
    {
        printf("\nUnderflow\n");
        printf("\nStack is Empty\n");
    }
    else
    {
        t=first;
        printf("\n-------\n");
        while(t!=NULL)
        {
            printf("\n%d\n",t->data);
            t=t->link;
        }
    }
}
