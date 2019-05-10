#include<stdio.h>
#include<stdlib.h>
struct queue
{

    int data;
    struct queue *link;
};
struct queue *front,*rear,*temp;
front=rear=NULL;
int count=0;
void enque();
void deque();
void view();
void front1();
void size();
int empty();
void main()
{
    int ans;
    do
    {
        printf("\nSelect Option\n");
        printf("\n1.Enque\n2.Deque\n3.View Queue\n4.View Front Data\n5.Queue Size\n6.Exit\n");
        scanf("%d",&ans);
        if(ans==1)
        {
            enque();
        }
        if(ans==2)
        {
            deque();
        }
        if(ans==3)
        {
            view();
        }
        if(ans==4)
        {
            front1();
        }
        if(ans==5)
        {
            size();
        }
    }while(ans!=6);
}
void enque()
{
    if((front==NULL)&&(rear==NULL))
    {
        temp=(struct queue *)malloc(1*sizeof(struct queue));
        rear=front=temp;
    }
    else
    {
        temp=(struct queue *)malloc(1*sizeof(struct queue));
        front->link=temp;
        temp=front;
    }
}
void deque()
{
    if(front==rear)
    {
        printf("\nData to be deleted: %d\n",front->data);
        front=rear=NULL;
    }
    else
    {

    }
}
