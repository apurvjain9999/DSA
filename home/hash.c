/*Without Collision*/
#include<stdio.h>
int main()
{
    int arr[10];
    int hash[10];
    int temp=0;
    int ser=0;
    int ans=-1;
    printf("\nEnter 10 numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        temp=(arr[i]%10);
        hash[temp]=arr[i];
    }
    do
    {
        printf("\nEnter value to be searched\n");
        scanf("%d",&ser);
        temp=(ser%10);
        if(hash[temp]==ser)
        {
            printf("\nNumber present in the sequence\n");
        }
        else
        {
            printf("\nNumber not present in the sequence\n");
        }
        printf("\nWant to search more?\n");
        printf("\n1.Yes\t2.No\n");
        scanf("%d",&ans);
    }while(ans!=2);
    return 0;
}

