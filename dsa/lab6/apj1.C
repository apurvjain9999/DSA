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
    struct student *first,*second,*third;
    first=(struct student*)malloc(1*sizeof(struct student));
    second=(struct student*)malloc(1*sizeof(struct student));
    third=(struct student*)malloc(1*sizeof(struct student));
    strcpy(first->id,"2017KUCP1011");
    strcpy(first->name,"Ashish");
    strcpy(second->id,"2017KUCP1012");
    strcpy(second->name,"Dipesh");
    strcpy(third->id,"2017KUCP1013");
    strcpy(third->name,"Shree");
    first->p=second;
    second->p=third;
    third->p=NULL;
    struct student *link,*head;
    head=first;
    link=head;
    while(link!=NULL)
    {
        printf("%s %s",link->id,link->name);
        link=link->p;
    }
    return 0;
}
