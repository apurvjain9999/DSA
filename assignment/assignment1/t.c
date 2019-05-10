#include<stdio.h>
#include<stdlib.h>
int count=-1,stack[10];
void push();
void pop();
void display();

void main()
{
int ch;
while(1)
{
printf("\n***STACK MENU***\n");
printf("\n\n1.push\n2.pop\n3.display\n4.exit\n");
printf("\nEnter your choice(1-4)\n:");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
        break;
case 2: pop();
        break;
case 3: display();
        break;
case 4: exit(0);
default: printf("\nwrong choice!!\n");
}
}
}
void push()
{
int val;
if(count==10)
{
        printf("\nStack is full\n");
        return 0;
}
else
{
        printf("\nenter element\n");       
        scanf("%d",&val);
        count=count+1;
        stack[count]=val;
}       
}
void pop()
{
if(count==-1)
{
printf("\nstack is empty\n");
}
else
{
printf("\nDeleted element is %d\n",stack[count]);
count=count-1;
}
}      
void display()
{
int i;
if(count==-1)
{
printf("\nstack is empty\n");
}
else
{
printf("\nStack is....\n");
for(i=count;i>=0;--i)
printf("\n%d\n",stack[i]);
}
}
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
