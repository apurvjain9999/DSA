#include<stdio.h>
void main()
{
    int a[50],*p;
    int n;
    int i,j,temp;
    printf("\nEnter size of array\n");
    scanf("%d",&n);
    printf("\nEnter %d numbers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(*(p+j)<*(p+j-1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j-1);
                *(p+j-1)=temp;
            }
        }
    }
    printf("\nSorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
