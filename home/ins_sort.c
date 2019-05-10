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
    int j;
    for(int i=1;i<5;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
        printf("\nArray after Pass %d\n",i);
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
