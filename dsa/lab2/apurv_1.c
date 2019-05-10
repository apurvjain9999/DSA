#include<stdio.h>
int main()
{
    int a[8]={23,32,41,54,86,43,24,76};
    int i,j,m;
    for(i=0,j=3;i<2;i++,j--)
    {
        m=a[i];
        a[i]=a[j];
        a[j]=m;
    }
    for(i=4,j=7;i<6;i++,j--)
    {
        m=a[i];
        a[i]=a[j];
        a[j]=m;
    }
    for(i=0;i<8;i++)
    {
        printf("\n%d\n",a[i]);
    }
    return 0;
}
