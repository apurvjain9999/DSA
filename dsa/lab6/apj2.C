#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char id[12];
    char name[20];
    struct student *p;
};
int main()
{
    struct student *first=NULL,*temp;
    int ans;
    do
    {
        printf("\nSelect Option\n");
        printf("\n1.Enter Data\n2.View Data\n3.Delete Data\n4.Exit\n");
        scanf("%d",&ans);
        switch(ans)
        {
            case 1:
                {
                    if(first==NULL)
                    {
                        printf("\nEnter data\n");
                        first=(struct student*)malloc(1*sizeof(struct student));
                        printf("\nEnter name\n");
                        scanf("%s",&first->name);
                        printf("\nEnter id\n");
                        scanf("%s",&first->id);
                        printf("\n%s %s\n",first->id,first->name);
                        first->p=NULL;
                    }
                    else
                    {
                        int a=0;
                        int count=0;
                        do
                        {
                            int loc;
                            printf("\nEnter location\n");
                            scanf("%d",&loc);
                            struct student *link;
                            link=first;
                            while(link!=NULL)
                            {
                                count++;
                                link=link->p;
                            }
                            if(loc>count&&loc!=count+1)
                            {
                                printf("\nCannot enter data at %d location\n",loc);
                                printf("\nThere are only %d nodes",count);
                                a=1;
                                continue;
                            }
                            else
                            {
                                struct student *enter;
                                enter=first;
                                int i;
                                for(i=1;i<loc-1;i++)
                                {
                                    enter=enter->p;
                                }
                                temp=(struct student*)malloc(1*sizeof(struct student));
                                if(enter==first)
                                {
                                    printf("\nEnter data\n");
                                    printf("\nEnter name\n");
                                    scanf("%s",&temp->name);
                                    printf("\nEnter id\n");
                                    scanf("%s",&temp->id);
                                    printf("\n%s %s\n",temp->id,temp->name);
                                    temp->p=enter;
                                }
                                else
                                {
                                    printf("\nEnter data\n");
                                    printf("\nEnter name\n");
                                    scanf("%s",&temp->name);
                                    printf("\nEnter id\n");
                                    scanf("%s",&temp->id);
                                    temp->p=enter->p;
                                    enter->p=temp;
                                }
                                a=0;
                            }
                        }while(a);
                    }
                }
                break;

            case 2:
                {
                    temp=first;
                    printf("\n-------------------------------------\n");
                    printf("\nID   NAME\n");
                    while(temp!=NULL)
                    {
                        printf("\n%s   %s\n",temp->id,temp->name);
                        temp=temp->p;
                    }
                }
                break;
        }
    }while(ans!=4);
    return 0;
}

