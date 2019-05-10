#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list* link;
};
struct list *first=NULL,*temp,*t;
int count=0;
void add_beg();
void add_end();
void add_mid();
void del_beg();
void del_end();
void del_mid();
void display();
void search();

void main()
{
    int ans,ans1;
    do
    {
        printf("\nPlease select option\n");
        printf("\n1.Add Data\n2.Delete Data\n3.Display Data\n4.Search Data\n5.Exit\n");
        scanf("%d",&ans);
        switch(ans)
        {
            case 1:
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
                case 2:
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
                    case 3:
                        {
                            if(first==NULL)
                            {
                                printf("\nUNDERFLOW\n");
                            }
                            else
                                display();
                        }
                    break;
                    case 4:
                        {
                            if(first==NULL)
                            {
                                printf("\nUNDERFLOW\n");
                            }
                            else
                                search();
                        }
                    break;
                    case 5: printf("\nThank You\n");
                    break;
                    default: printf("\nTry Again\n");
        }
    }while(ans!=5);
}
void add_beg()
{
    temp=(struct list*)malloc(1*sizeof(struct list));
    printf("\nEnter data\n");
    scanf("%d",&temp->data);
    if(first==NULL)
    {
        first=temp;
        first->link=first;
    }
    else
    {
        temp->link=first;
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
            t=t->link;
        t->link=temp;
        temp->link=first;
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
                    t=t->link;
                }
                temp->link=t->link;
                t->link=temp;
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
    first=first->link;
    free(temp);
    count--;
}
void del_end()
{
    t=first;
    int i;
    for(i=1;i<count-1;i++)
    {
        t=t->link;
    }
    temp=t->link;
    printf("\nValue deleted: %d\n",temp->data);
    t->link=first;
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
        else if(loc==count+1)
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
                t=t->link;
            }
            temp=t->link;
            printf("\nValue deleted: %d\n",temp->data);
            t->link=temp->link;
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
        temp=temp->link;
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
            temp=temp->link;
    }
    if (found==1)
        printf("%d is present at node: %d",val,loc);
    else
        printf("%d is not present",val);
}
