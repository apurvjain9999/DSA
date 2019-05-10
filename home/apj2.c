#include<stdio.h>
void main()
{
    int a[50],*p;
    int k;
    int n;
    int i,j,temp;
    printf("\nEnter size of array\n");
    scanf("%d",&k);
    printf("\nEnter %d numbers\n",k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<k;i++)
    {
        for(j=1;j<k-i;j++)
        {
            if(*(p+j)<*(p+j-1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j-1);
                *(p+j-1)=temp;
            }
        }
    }
    printf("\nEnter the value of n\n");
    scanf("%d",&n);
    printf("\n%d th smallest value of array is %d\n",n,*(p+n-1));
}

