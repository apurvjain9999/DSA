#include<stdio.h>
#include<math.h>
struct tower1
{
    int data1;
    struct tower1 *link1;
}
struct tower1 *top1 = NULL, *temp1 = NULL, *t1 = NULL;
struct tower2
{
    int data2;
    struct tower2 *link2;
}
struct *top2 = NULL, *temp2 = NULL, *t2 = NULL;
struct tower3
{
    int data3;
    struct tower3 *link3;
}
struct *top3 = NULL, *temp3 = NULL, *t3 = NULL;
void push1(int data)
{
    temp=(struct tower1*)malloc(1*sizeof(struct tower1));
    temp->data1=data;
    temp->link=NULL;
    if(top1==NULL)
    {
        top1=temp1;
    }
    else
    {
        temp1->link=top1;
        top1=temp1;
    }
}
int pop1()
{
    int b = 999;
    if (top1 == NULL)
    {
        return b;
    }
    else
    {
        int data;
        p1 = top1;
        top1 = top1->link1;
        data=p1->data1;
        free(p1);
        return(data);
    }
}
void push2(int data)
{
    temp=(struct tower2*)malloc(1*sizeof(struct tower2));
    temp->data2=data;
    temp->link=NULL;
    if(top2==NULL)
    {
        top2=temp2;
    }
    else
    {
        temp2->link=top2;
        top2=temp2;
    }
}
int pop2()
{
    int b = 999;
    if (top2 == NULL)
    {
        return b;
    }
    else
    {
        int data;
        p2 = top2;
        top2 = top2->link2;
        data=p2->data2;
        free(p2);
        return(data);
    }
}
void push3(int data)
{
    temp=(struct tower3*)malloc(1*sizeof(struct tower3));
    temp->data3=data;
    temp->link=NULL;
    if(top3==NULL)
    {
        top3=temp3;
    }
    else
    {
        temp3->link=top3;
        top3=temp3;
    }
}
int pop3()
{
    int b = 999;
    if (top3 == NULL)
    {
        return b;
    }
    else
    {
        int data;
        p3 = top3;
        top3 = top3->link3;
        data=p3->data3;
        free(p3);
        return(data);
    }
}
int top_of_stack()
{
    if (top1 != NULL && top1->data1 == 1 )
    {
        return 1;
    }
    else if (top2 != NULL && top2->data2 == 1)
    {
        return 2;
    }
    else if (top3 != NULL && top3->data3 == 1)
    {
        return 3;
    }
}
void display1()
{
    p1 = top1;
    printf("\nTower1->\t");
    while (p1 != NULL)
    {
        printf("%d\t",p1->data1);
        p1 = p1->link1;
    }
}
void display2()
{
    p2 = top2;
    printf("\nTower2->\t");
    while (p2 != NULL)
    {
        printf("%d\t",p2->data2);
        p2 = p2->next2;
    }
}
void display3()
{
    p3 = top3;
    printf("\nTower3->\t");
    while (p3 != NULL)
    {
        printf("%d\t",p3->data3);
        p3 = p3->next3;
    }
}
void toh(int n)
{
    int i, x, a, b;
    for (i = 0; i < (pow(2,n)); i++)
    {
        display1();
        display2();
        display3();
        x = top_of_stack();
        if (i % 2 == 0)
        {
            if (x == 1)
            {
                push3(pop1());
            }
            else if (x == 2)
            {
                push1(pop2());
            }
            else if (x == 3)
            {
                push2(pop3());
            }
        }
        else
        {
            if (x == 1)
            {
                a = pop2();
                b = pop3();
                if (a < b && b != 999)
                {
                    push3(b);
                    push3(a);
                }
                else if (a > b && a != 999)
                {
                    push2(a);
                    push2(b);
                }
                else if (b == 999)
                {
                    push3(a);
                }
                else if (a == 999)
                {
                    push2(b);
                }
            }
            else if (x == 2)
            {
                a = pop1();
                b = pop3();
                if (a < b && b != 999)
                {
                    push3(b);
                    push3(a);
                }
                else if (a > b && a != 999)
                {
                    push1(a);
                    push1(b);
                }
                else if (b == 999)
                {
                    push3(a);
                }
                else if (a == 999)
                {
                    push1(b);
                }
            }
            else if (x == 3)
            {
                a = pop1();
                b = pop2();
                if (a < b && b != 999)
                {
                    push2(b);
                    push2(a);
                }
                else if (a > b && a != 999)
                {
                    push1(a);
                    push1(b);
                }
                else if (b == 999)
                {
                    push2(a);
                }
                else if (a == 999)
                {
                    push1(b);
                }
            }
        }
    }
}
int main()
{
    int n, i;
    printf("Enter the number of disks\n");
    scanf("%d",&n);
    for (i = n; i >= 1; i--)
    {
        push1(i);
    }
    toh(n);
}
