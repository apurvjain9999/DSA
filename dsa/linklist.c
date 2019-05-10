#include<stdio.h>
#include<stdlib.h>
struct list
{
    int a;
    struct list *link;
};
void main()
{
    struct list *first,*temp,*t;
    int ans,count=0,loc,i=1,search,check=0;
    first=NULL;
    do
    {
        printf("\nEnter your option\n");
        printf("\n1.Enter Data\n2.View Data\n3.Delete Data\n4.Search Data\n5.Exit\n");
        scanf("%d",&ans);
        if(ans==1)
        {
            if(first==NULL)
            {
                //temp=(struct list*)malloc(1*sizeof(struct list));
                temp=(struct list*)calloc(1,sizeof(struct list));
                printf("\nEnter data\n");
                scanf("%d",&temp->a);
                first=temp;
                first->link=NULL;
                count++;
            }
            else
            {
                printf("\nEnter location\n");
                scanf("%d",&loc);
                if(loc<=count+1&&loc!=1)
                {
                    t=first;
                    i=1;
                    while(i<loc-1)
                    {
                        t=t->link;
                        i=i+1;
                    }
                    //temp=(struct list*)malloc(1*sizeof(struct list));
                    temp=(struct list*)calloc(1,sizeof(struct list));
                    printf("\nEnter data\n");
                    scanf("%d",&temp->a);
                    temp->link=t->link;
                    t->link=temp;
                    count++;
                }
                else if(loc==1)
                {
                    //temp=(struct list*)malloc(1*sizeof(struct list));
                    temp=(struct list*)calloc(1,sizeof(struct list));
                    printf("\nEnter data\n");
                    scanf("%d",&temp->a);
                    temp->link=first;
                    first=temp;
                    count++;
                }
                else
                {
                    printf("\nInvalid Location\nTry Again\n");
                }
            }
        }
        if(ans==2)
        {
            if(first!=NULL)
            {
                temp=first;
                while(temp!=NULL)
                {
                    printf("\n%d",temp->a);
                    temp=temp->link;
                }
                printf("\n");
            }
            else
            {
                printf("\nUNDERFLOW\nLink List is empty\n");
            }
        }
        if(ans==3)
        {
            if(first!=NULL)
            {
                printf("\nEnter node to be deleted\n");
                scanf("%d",&loc);
                if(loc<=count)
                {
                    i=1;
                    if(loc!=1)
                    {
                        t=first;
                        i=1;
                        while(i<loc-1)
                        {
                            t=t->link;
                            i=i+1;
                        }
                        temp=t->link;
                        t->link=temp->link;
                        free(temp);
                        count--;
                    }
                    else
                    {
                        temp=first;
                        first=first->link;
                        free(temp);
                    }
                }
                else
                {
                    printf("\nInvalid Location\nTry Again\n");
                }
            }
            else
            {
                printf("\nUNDERFLOW\nLink List is empty\n");
            }
        }
        if(ans==4)
        {
            if(first!=NULL)
            {
                printf("\nEnter data to be searched\n");
                scanf("%d",&search);
                temp=first;
                i=1;
                while(temp!=NULL)
                {
                    if(search==temp->a)
                    {
                        check=1;
                        break;
                    }
                    else
                    {
                        temp=temp->link;
                        i++;
                    }
                }
                if(check==0)
                {
                    printf("\n%d not found\n",search);
                }
                else
                {
                    printf("%d is found at node %d",search,i);
                }
            }
            else
            {
                    printf("\nUNDERFLOW\nLink List is empty\n");

            }
        }
    }while(ans!=5);
}
