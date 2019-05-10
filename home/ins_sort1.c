#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5]={50,5,14,60,30};
    int j,temp;
    for(int i=1;i<5;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&a[j]<temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    return 0;
}
