#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int data;
    struct stack *link;
};
struct stack *top=NULL,*temp;
void push(int);
void pop();
void display();
int main()
{
    unsigned long int dec;
    int n,rem;
    printf("\nEnter a Number\n");
    scanf("%d",&dec);
    n=dec;
    while(n!=0)
    {
        rem=n%2;
        push(rem);
        n=n/2;
    }
    printf("\nThe Binary equivalent of %d is: ",dec);
    if(dec!=0)
        display();
    else
        printf("%d",0);
    return 0;
}
void push(int data)
{
    temp=(struct stack*)malloc(1*sizeof(struct stack));
    temp->data=data;
    temp->link=NULL;
    if(top==NULL)
    {
        top=temp;
    }
    else
    {
        temp->link=top;
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
        int data;
        temp = top;
        top = top->link;
        data=temp->data;
        free(temp);
        printf("\nValue Deleted %d\n",data);
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
        temp = top;
        while (temp != NULL)
        {
            printf("%d",temp->data);
            temp = temp->link;
        }
    }
}

