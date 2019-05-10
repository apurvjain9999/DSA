#include<stdio.h>
#define n 5
int main()
{
    int a[n]={23,24,12,32,25};
    int i,j,m;
    for(j=1;j<n;j++)
    {
        if (a[j]<a[j-1])
        {
            m=a[j];
            i=j-1;
            while(i>=0&&m<a[i])
            {
                a[i+1]=a[i];
                i=i-1;
            }
            a[i+1]=m;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d\n",a[i]);
    }
    return 0;
}
