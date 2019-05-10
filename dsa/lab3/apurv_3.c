#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,m;
    int max;
    int max_pos;
    int a[10];
    printf("\nEnter Elements of Array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<10;i++)
    {
        max=a[0];
        max_pos=0;
        for(j=1;j<10;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
                max_pos=j;
            }
        }
        m=a[10-i];
        a[10-i]=a[max_pos];
        a[max_pos]=m;
    }
    return 0;
}
