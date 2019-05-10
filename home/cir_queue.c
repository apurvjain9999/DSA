#include<stdio.h>

int arr[5];
int front=-1;
int rear=-1;
int count=0;
void enque();
void deque();
void display();

void main()
{
    int flag=-1;
    int ans=0;
    do
    {
        printf("\nSelect Option\n");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n")
        scanf("%d",&ans);
        switch(ans)
        {
            case 1: enque();
            break;
            case 2: deque();
            break;
            case 3: display();
            break;
            case 4:
                {
                    printf("\nThank You\n");
                    flag=0;
                }
            break;
            default: printf("\nTry Again!\n");
        }
    }while(flag==-1);
}

void enque()
{
    if(count==5)
    {
        printf("\nOverFlow\n");
    }
    else
    {
        if(rear==front)
            rear=front=0;
        else if(rear<5)
            front=front+1;
        else
            rear=0;
        ptintf("\nEnter Data\n");
        scanf("%d",&arr[front]);
    }
}
