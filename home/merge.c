#include<stdio.h>
void mergesort(int a[],int l,int r);
void merge(int a[],int l,int m,int r);
int main()
{
    int a[10];
    printf("\nEnter a sequence of 10 numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,9);
    printf("\nArray after merge sort is\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
}

void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}

void merge(int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int b[n1];
    int c[n2];
    for(int i=0;i<n1;i++)
    {
        b[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        c[j]=a[m+1+j];
    }
    int i=0;
    int j=0;
    int k=l;
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
