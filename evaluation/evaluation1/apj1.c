#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *first=NULL, *temp, *a;
int count=0;
void create();
void add_beg();
void add_end();
void add_user();
void del_beg();
void del_end();
void del_user();
void search();
void display();

void main()
{
    int ans,ans1;
    do
    {
        printf("\n Select one option\n");
        printf("\n 1.Create n nodes\n 2.Insert only one node\n 3.Delete a node\n 4.Search data\n 5.Display data\n 6.Exit\n");
        scanf("%d",&ans);
        switch (ans)
        {
            case 1: create();
            break;
            case 2:
                {
                    do
                    {
                        printf("\n Where you want to insert the node?\n");
                        printf("\n 1.At Beginning\n 2.At End\n 3.Any other location\n");
                        scanf("%d",&ans1);
                        switch(ans1)
                        {
                            case 1:
                                {
                                    add_beg();
                                    ans1=4;
                                }
                            break;
                            case 2:
                                {
                                    if(first==NULL)
                                    {
                                        printf("\n UNDERFLOW\n");
                                        printf("\n Try Again!\n");
                                    }
                                    else
                                    {
                                        add_end();
                                        ans1=4;
                                    }
                                }
                            break;
                            case 3:
                                {
                                    if(first==NULL)
                                    {
                                        printf("\n UNDERFLOW\n");
                                        printf("\n Try Again!\n");
                                    }
                                    else
                                    {
                                        add_user();
                                        ans1=4;
                                    }
                                }
                            break;
                            default: printf("\n Try Again\n");
                        }
                    }while(ans1!=4);
                }
            break;
            case 3:
                {
                    if(first!=NULL)
                    {
                        do
                        {
                            printf("\n Which node you want to delete?\n");
                            printf("\n 1.At Beginning\n 2.At End\n 3.Any other location\n");
                            scanf("%d",&ans1);
                            switch(ans1)
                            {
                                case 1:
                                    {
                                        del_beg();
                                        ans1=4;
                                    }
                                break;
                                case 2:
                                    {
                                        del_end();
                                        ans1=4;
                                    }
                                break;
                                case 3:
                                    {
                                        del_user();
                                        ans1=4;
                                    }
                                break;
                                default: printf("\n Try Again\n");
                            }
                        }while(ans1!=4);
                    }
                    else
                    {
                        printf("\n UNDERFLOW\n");
                        printf("\n Try Again!\n");
                    }
                }
            break;
            case 4:
                {
                    if(first==NULL)
                    {
                        printf("\n UNDERFLOW\n");
                        printf("\n Try Again!\n");
                    }
                    else
                        search();
                }
            break;
            case 5:
                {
                    if(first==NULL)
                    {
                        printf("\n UNDERFLOW\n");
                        printf("\n Try Again!\n");
                    }
                    else
                        display();
                }
            break;
            case 6: printf("\n Thank You\n");
            break;
            default: printf("\n Try Again\n");
        }
    }while(ans!=6);
}
void create()
{
    int i;
    int n;
    printf("\n Enter the number of nodes you want to enter\n");
    scanf("%d",&n);
    count=n;
    for(i=1;i<=n;i++)
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        printf("\n Enter data %d\n",i);
        scanf("%d",&temp->data);
        temp->link=NULL;
        if(first==NULL)
        {
            first=temp;
            a=first;
        }
        else
        {
            a->link=temp;
            a=temp;
        }
    }
}
void add_beg()
{
    temp=(struct node *)malloc(1*sizeof(struct node));
    printf("\n Enter data\n");
    scanf("%d",&temp->data);
    if(first==NULL)
    {
        temp->link=NULL;
        first=temp;
        count++;
    }
    else
    {
        temp->link=first;
        first=temp;
        count++;
    }
}
void add_end()
{
    int i;
    temp=(struct node *)malloc(1*sizeof(struct node));
    printf("\n Enter data\n");
    scanf("%d",&temp->data);
    a=first;
    for(i=1;i<count;i++)
        a=a->link;
    a->link=temp;
    temp->link=NULL;
    count++;
}
void add_user()
{
    int loc;
    int i;
    int j;
    do
    {
        printf("\n Enter location where you want to enter data\n");
        scanf("%d",&loc);
        if(loc<=count+1)
        {
            if(loc==1)
                add_beg();
            else if(loc==count+1)
                add_end();
            else
            {
                a=first;
                for(i=1;i<loc-1;i++)
                        a=a->link;
                temp=(struct node *)malloc(1*sizeof(struct node));
                printf("\n Enter data\n");
                scanf("%d",&temp->data);
                temp->link=a->link;
                a->link=temp;
                count++;
            }
            j=1;
        }
        else
        {
            printf("\n Invalid Location Entered\n Try Again!\n");
            j=0;
        }
    }while(j!=1);
}
void del_beg()
{
    printf("\n Data Deleted: %d\n",first->data);
    temp=first;
    first=first->link;
    free(temp);
    count--;
}
void del_end()
{
    int i;
    a=first;
    for(i=1;i<count-1;i++)
        a=a->link;
    temp=a->link;
    printf("\n Data Deleted: %d\n",temp->data);
    a->link=NULL;
    free(temp);
    count--;
}
void del_user()
{
    int loc;
    int i;
    int j;
    do
    {
        printf("\n Enter location of node you want to delete\n");
        scanf("%d",&loc);
        if(loc<=count)
        {
            if(loc==1)
                del_beg();
            else if(loc==count)
                del_end();
            else
            {
                a=first;
                for(i=1;i<loc-1;i++)
                        a=a->link;
                temp=a->link;
                printf("\n Data Deleted: %d\n",temp->data);
                a->link=temp->link;
                free(temp);
                count--;
            }
            j=1;
        }
        else
        {
            printf("\n Invalid Location Entered\nTry Again!\n");
            j=0;
        }
    }while(j!=1);
}
void search()
{
    int i;
    int comp;
    int j=0;
    printf("\n Enter value to be searched\n");
    scanf("%d",&comp);
    a=first;
    for(i=1;i<=count;i++)
    {
        if(a->data==comp)
        {
            j=1;
            break;
        }
        else
            a=a->link;
    }
    if(j==1)
    {
        printf("\n The data %d is found at node %d\n",comp,i);
    }
    else
        printf("\n Data not found\n");
}
void display()
{
    int i;
    printf("\n Data\n-----\n");
    a=first;
    for(i=1;i<=count;i++)
    {
        printf("\n %d\n",a->data);
        a=a->link;
    }
}
