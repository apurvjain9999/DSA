#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int arr1[5];
    int i;
    printf("Original Array:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=0;i<5;i++)
    {
        arr1[i]=arr[i];
    }
    for(i=1;i<5;i++)
    {
        arr[i]=arr1[i-1];
     }
    arr[0]=arr1[4];
    printf("Array after rotation:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
