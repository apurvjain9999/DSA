#include<stdio.h>
#include<stdlib.h>
int arr[5];
int front=-1;
int rear=-1;
int count=0;
void insertion();
void deletion();
void display();
int main()
{
    int ans=0;

    do
    {
        printf("\nEnter Your Choice\n");
        printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
        scanf("%d",&ans);
        switch(ans)
        {
            case 1:
                {
                    insertion();
                    ans=-1;
                }
            break;
            case 2:
                {
                    deletion();
                    ans=-1;
                }
            break;
            case 3:
                {
                    display();
                    ans=-1;
                }
            break;
            case 4:
                {
                      printf("\nThank You\n");
                      exit(0);
                }
            break;
            default: printf("\nTry Again!\n");
        }
    }while(ans==-1);
    return 0;
}

void insertion()
{
    if(count==5)
    {
        printf("\nQueue is Full\n");
    }
    else
    {

        /*if(rear<front)
        {
            count=0;
        }*/
        if(rear<5)
            rear=rear+1;
        else
            rear=0;
        printf("\nEnter Data\n");
        scanf("%d",&arr[rear]);
        if(front==-1)
        {
            front++;
        }
        count++;
    }
}

void deletion()
{
    if(count==0)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        int data;
        data=arr[front];
        printf("\nValue Deleted: %d\n",data);
        front=front+1;
        count--;
    }
}

void display()
{
    if(count==0)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        int i=0,j=front;
        while(i<count)
        {
            printf("\n%d\n",arr[j]);
            i++;
            j++;
        }
        if(rear<front)
        {
            for(i=0;i<front;i++)
                printf("\n%d\n",arr[i]);
        }
    }
}
