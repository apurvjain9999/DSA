#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int arr1[5];
    int i,j;
    for (i=0,j=4;i<5;i++,j--)
    {
        arr1[i]=arr[j];
    }
    printf("Original Array:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Reverse Array:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr1[i]);
    }
    return 0;
}

