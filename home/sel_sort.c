#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[5]={5,3,1,2,10};
    int min=0,temp=0,min_var=0;
    /*printf("\nEnter Elements\n");
    for(int i=0;i<5;i++)
    {
        printf("\nEnter Element %d\n",i+1);
        scanf("%d",&arr[i]);
    }*/
    for(int i=0;i<4;i++)
    {
        min=arr[i];
        for(int j=i+1;j<5;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                min_var=j;
            }

        }
        temp=arr[i];
        arr[i]=min;
        arr[min_var]=temp;
        printf("\nArray after Pass %d\n",i+1);
        for(int k=0;k<5;k++)
        {
            printf("%d\t",arr[k]);
        }
    }
    printf("\nElements of Array\n");
    for(int i=0;i<5;i++)
    {
        printf("\n%d",arr[i]);
    }
}
