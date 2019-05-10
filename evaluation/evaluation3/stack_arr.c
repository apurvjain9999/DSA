#include<stdio.h>
#include<stdlib.h>

int stack[10];
int top=-1;

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
    int data;
    if(top==9)
    {
        printf("\nOverflow\n");
        printf("\nStack is Full\n");
    }
    else
    {
        printf("\nEnter data\n");
        scanf("%d",&data);
        stack[++top]=data;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nUnderflow\n");
        printf("\nStack is Empty\n");
    }
    else
    {
        printf("\nValue Deleted %d\n",stack[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\nUnderflow\n");
        printf("\nStack is Empty\n");
    }
    else
    {
        printf("\n---------\n");
        for(i=0;i<=top;i++)
        {
            printf("\n%d\n",stack[i]);
        }
    }
}
