#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list* front;
    struct list* rear;
};
struct list *first=NULL,*last=NULL,*temp,*t;
int count=0;
void create();
void del();
void add_beg();
void add_end();
void add_mid();
void del_beg();
void del_end();
void del_mid();
void display();
void rev_display();
void search();
void main()
{
    int ans,ans1;
    int check=0;
    do
    {
        printf("\nPlease select option\n");
        printf("\n1.Create Nodes\n2.Add Data\n3.Delete Data\n4.Display Data\n5.Display Data in Reverse\n6.Search Data\n7.Exit\n");
        scanf("%d",&ans);
        switch(ans)
        {
            case 1:
                {
                    if(check==0)
                    {
                        create();
                        check++;
                    }
                    else
                    {
                        int ans2=-1;
                        do
                        {
                            printf("\nThere are already %d nodes",count);
                            printf("\nSelect One Option\n");
                            printf("\n1.Enter nodes at End\n2.Create Fresh Nodes\n");
                            scanf("%d",&ans2);
                            switch(ans2)
                            {
                                case 1:
                                    {
                                        create();
                                        ans2=0;
                                    }
                                break;
                                case 2:
                                    {
                                        del();
                                        create();
                                        ans2=0;
                                    }
                                break;
                                default: printf("\nTry Again\n");
                            }
                        }while(ans2!=0);
                    }
                }
            break;
            case 2:
                {
                    do
                    {
                        printf("\nWhere you want to add data?\n");
                        printf("\n1.At Beginning\n2.At End\n3.At any other location\n");
                        scanf("%d",&ans1);
                        switch(ans1)
                        {
                            case 1:
                                {
                                    add_beg();
                                    ans1=0;
                                }
                            break;
                            case 2:
                                {
                                    add_end();
                                    ans1=0;
                                }
                            break;
                            case 3:
                                {
                                    add_mid();
                                    ans1=0;
                                }
                            break;
                            default: printf("\nTry Again\n");
                        }
                    }while(ans1!=0);
                }
                break;
                case 3:
                    {
                        if(first==NULL)
                        {
                            printf("\nUNDERFLOW\n");
                        }
                        else
                        {
                            do
                            {
                                printf("\nWhich node you want to delete?\n");
                                printf("\n1.At Beginning\n2.At End\n3.At any other location\n");
                                scanf("%d",&ans1);
                                switch(ans1)
                                {
                                    case 1:
                                    {
                                        del_beg();
                                        ans1=0;
                                    }
                                    break;
                                    case 2:
                                    {
                                        del_end();
                                        ans1=0;
                                    }
                                    break;
                                    case 3:
                                    {
                                        del_mid();
                                        ans1=0;
                                    }
                                    break;
                                    default: printf("\nTry Again\n");
                                }
                            }while(ans1!=0);
                        }
                    }
                    break;
                    case 4:
                        {
                            if(first==NULL)
                            {
                                printf("\nUNDERFLOW\n");
                            }
                            else
                                display();
                        }
                    break;
                    case 5:
                        {
                            if(first==NULL)
                            {
                                printf("\nUNDERFLOW\n");
                            }
                            else
                                rev_display();
                        }
                    break;
                    case 6:
                        {
                            if(first==NULL)
                            {
                                printf("\nUNDERFLOW\n");
                            }
                            else
                                search();
                        }
                    break;
                    case 7: printf("\nThank You\n");
                    break;
                    default: printf("\nTry Again\n");
        }
    }while(ans!=7);
}
void create()
{
    int i;
    do
    {
        temp=(struct list*)malloc(1*sizeof(struct list));
        printf("\nEnter data\n");
        scanf("%d",&temp->data);
        if(first==NULL)
        {
            first=temp;
            first->front=NULL;
            first->rear=NULL;
            last=first;
            count++;
        }
        else
        {
            last->front=temp;
            temp->rear=last;
            temp->front=NULL;
            last=temp;
            count++;
        }
        do
        {
            printf("\nWant to create more nodes?\n");
            printf("\n1.Yes\n2.No\n");
            scanf("%d",&i);
            if(i==1||i==2)
            {
                break;
            }
            else
            {
                printf("\nTry Again\n");
            }
        }while(i!=1||i!=2);
    }while(i==1);
}
void del()
{
    int loc;
    for(loc=1;loc<count;loc++)
    {
        temp=last;
        last=last->rear;
        printf("\nData Deleted %d\n",temp->data);
        free(temp);
    }
    printf("\nData Deleted %d\n",last->data);
    free(last);
    printf("\nAll Nodes Deleted\n");
    count=0;
}
void add_beg()
{
    temp=(struct list*)malloc(1*sizeof(struct list));
    printf("\nEnter data\n");
    scanf("%d",&temp->data);
    if(first==NULL)
    {
        first=temp;
        first->front=NULL;
        first->rear=NULL;
    }
    else
    {
        temp->front=first;
        temp->rear=NULL;
        first->rear=temp;
        first=temp;
    }
    count++;
}
void add_end()
{
    if(first==NULL)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        int i;
        temp=(struct list*)malloc(1*sizeof(struct list));
        printf("\nEnter data\n");
        scanf("%d",&temp->data);
        t=first;
        for(i=1;i<count;i++)
            t=t->front;
        temp->rear=t;
        t->front=temp;
        temp->front=NULL;
        last=temp;
        count++;
    }
}
void add_mid()
{
    int val=1;
    int loc;
    do
    {
        printf("\nEnter location where you want to add data\n");
        scanf("%d",&loc);
        if(loc==1)
        {
            add_beg();
            val=0;
        }
        else if(loc==count+1)
        {
            add_end();
            val=0;
        }
        else if(loc<count)
        {
            if(first==NULL)
            {
                printf("\nUNDERFLOW\n");
            }
            else
            {
                int i;
                temp=(struct list*)malloc(1*sizeof(struct list));
                printf("\nEnter data\n");
                scanf("%d",&temp->data);
                t=first;
                for(i=1;i<loc-1;i++)
                {
                    t=t->front;
                }
                temp->rear=t;
                temp->front=t->front;
                t->front=temp;
                count++;
            }
            val=0;
        }
        else
            printf("\nTry Again\n");
    }while(val!=0);
}
void del_beg()
{
    temp=first;
    printf("\nValue deleted: %d\n",temp->data);
    first=first->front;
    first->rear=NULL;
    free(temp);
    count--;
}
void del_end()
{
    t=first;
    int i;
    for(i=1;i<count-1;i++)
    {
        t=t->front;
    }
    temp=t->front;
    printf("\nValue deleted: %d\n",temp->data);
    t->front=NULL;
    last=t;
    free(temp);
    count--;
}
void del_mid()
{
    int val=1;
    int loc;
    do
    {
        printf("\nEnter location of node you want to delete\n");
        scanf("%d",&loc);
        if(loc==1)
        {
            del_beg();
            val=0;
        }
        else if(loc==count)
        {
            del_end();
            val=0;
        }
        else if(loc<count)
        {
            int i;
            t=first;
            for(i=1;i<loc-1;i++)
            {
                t=t->front;
            }
            temp=t->front;
            printf("\nValue deleted: %d\n",temp->data);
            t->front=temp->front;
            (t->front)->rear=t;
            count--;
            free(temp);
            val=0;
        }
        else
            printf("\nTry Again\n");
    }while(val!=0);
}
void display()
{
    int i;
    temp=first;
    printf("\nData\n\n-----\n");
    for(i=1;i<=count;i++)
    {
        printf("\n%d\n",temp->data);
        temp=temp->front;
    }
}
void rev_display()
{
    int i;
    temp=last;
    printf("\nReverse Data\n\n-----\n");
    for(i=count;i>=1;i--)
    {
        printf("\n%d\n",temp->data);
        temp=temp->rear;
    }
}
void search()
{
    int val;
    int loc;
    int i;
    int found=0;
    printf("\nEnter data you want to search\n");
    scanf("%d",&val);
    temp=first;
    for(i=1;i<=count;i++)
    {
        if(val==temp->data)
        {
            loc=i;
            found=1;
            break;
        }
        else
            temp=temp->front;
    }
    if (found==1)
        printf("%d is present at node: %d",val,loc);
    else
        printf("%d is not present",val);
}
