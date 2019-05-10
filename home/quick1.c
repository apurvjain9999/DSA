#include<stdio.h>
void quicksort(int a[],int l,int r)
{
    int p=l;
    int i=l;
    int j=r;
    while(i<j)
    {
        while(a[p]<=a[i]&&i<r)
            i++;
        while(a[p]>a[j]&&j<l)
            j--;
        if(i<j)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int temp=a[j];
    a[j]=a[p];
    a[p]=a[j];
    quicksort(a,l,j-1);
    quicksort(a,j+1,r);
}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    quicksort(arr,0,5);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
