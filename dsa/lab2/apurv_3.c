#include<stdio.h>
int main()
{
    int a[5]={2,12,11,32,41};
    int i,j,m;
    for(i=1;i<5;i++)
    {
        if (a[i]<a[i-1])
        {
            m=a[i-1];
            a[i-1]=a[i];
            j=i-1;
        }
        while(j>=0&&m<a[j])
        {
            if(a[j+1]<a[j])
            {
                a[j]=a[j+1];
            }
            j--;
        }
        a[i]=m;
    }
    for(i=0;i<5;i++)
    {
        printf("\n%d\n",a[i]);
    }
    return 0;
}
