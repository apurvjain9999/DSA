#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char *p,int j);
void main()
{
    char p[20];
    printf("\nEnter a name\n");
    gets(p);
    reverse(p,strlen(p));
}
void reverse(char *p,int j)
{
    int i,temp;
    int k=j-1;
    j=j-1;
    for(i=0;i<k/2;i++,j--)
    {
        temp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=temp;
    }
    *(p+k+1)='\0';
    printf("\nReverse string: %s\n",p);
}
