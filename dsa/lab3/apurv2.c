#include<stdio.h>
#include<string.h>
void swap(char c[][10],int j,int k)
{
    char e[1][10];
    strcpy(e[0],c[j]);
    strcpy(c[j],c[k]);
    strcpy(c[k],e[0]);
}
void sort(char b[][10],int n)
{
    int i,j;
    /*for(i=0;i<n;i++)
    {
        printf("\n%s\n",b[i]);
    }*/
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(strcmp(b[j],b[j-1])<0)
            {
                swap(b[0],j,j-1);
            }

        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n%s\n",b[i]);
    }

}
int main()
{
    char a[5][10];
    int i;
    char str[10];
    for(i=0;i<5;i++)
    {
        printf("\nEnter name of student %d\n",i+1);
        gets(a[i]);
    }
    sort(a[0],5);
    return 0;
}
