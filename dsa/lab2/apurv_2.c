#include<stdio.h>
int main()
{
    int a[9]={8,2,1,5,7,12,8,4,6},b[9];
    int i,j,m;
    for(i=0;i<9;i++)
    {
        for(j=1;j<9-i;j++)
        {
            if(a[j]<a[j-1])
            {
                m=a[j];
                a[j]=a[j-1];
                a[j-1]=m;
            }
        }
    }
    for(i=0,j=0;i<5,j<9;i++,j+=2)
    {
        b[j]=a[i];
    }
    for(i=8,j=1;i>4,j<9;i--,j+=2)
    {
        b[j]=a[i];
    }
    for(i=0;i<9;i++)
    {
        printf("\n%d\n",b[i]);
    }
    return 0;
}
