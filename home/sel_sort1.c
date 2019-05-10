#include<stdio.h>

int main()
{
    int a[5]={50,5,14,60,30};
    int min;
    for(int i=0;i<4;i++)
    {
        min=a[i];
        min_loc;
        for(int j=i+1;j<5;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                min_loc=j;
            }
        }
        temp=a[i];
        a[i]=a[min_loc];
        a[min_loc]=temp;
    }
}
