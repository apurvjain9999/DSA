#include<stdio.h>
#include<stdlib.h>

void mergesort(int a[],int l,int r);
void merge(int a[],int l,int m,int r);
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

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}

void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        m=(l+(r-1))/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
void merge(int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m
    int b[n1];
    int c[n2];
    for(int i=0;i<n1;i++)
    {
        b[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        b[j]=a[m+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(b[i]<c[j])
        {
            a[k]=b[i];
            i++;
        }
        else
        {
            a[k]=c[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=b[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=c[j];
        j++;
        k++;
    }
}
