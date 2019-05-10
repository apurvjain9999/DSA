#include<stdio.h>
int main()
{
    int arr[5]={23,54,12,11,96};
    int i,j,m,n;
    int small[5];
    printf("List of Values is:\n");
    for (i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\nEnter the value of n\n");
    scanf("%d",&n);
    for (i=0;i<5;i++)
    {
        for (j=1;j<5-i;j++)
        {
            if(arr[j]<arr[j-1])
            {
                m=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=m;

            }
        }
    }
    printf("\nThe %d th minimum no is %d\n",n,arr[n-1]);
    return 0;
}
