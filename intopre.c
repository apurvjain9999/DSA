#include<stdlib.h>
struct stack
{
    char data;
    struct stack* link;
};
struct stack *top=NULL,*temp;
void push(char data)
{
    temp=(struct stack*)malloc(1*sizeof(sizeof(struct stack)));
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
}
char pop()
{
    int data;
    data=top->data;
    temp=top;
    top=top->link;
    free(temp);
    return data;
}

void convert(char in[])
{
    char post()
}
