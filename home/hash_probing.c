/*With Collision: Linear Probing*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10];
    int hash[10]={0,0,0,0,0,0,0,0,0,0};
    int temp=0;
    int flag=0;
    int ans=0;
    int ser=0;
    printf("\nEnter 10 numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        int flag=1;
        temp=(arr[i]%10);
        if(hash[temp]==0)
            hash[temp]=arr[i];
        else
        {
            for(int j=temp;j<10;j++)
            {
                if(hash[j]==0)
                {
                    hash[j]=arr[i];
                    flag=0;
                    break;
                }
            }
            if(temp>0&&temp<=10&&flag==1)
            {
                for(int j=0;j<temp;j++)
                {
                    if(hash[j]==0)
                    {
                        hash[j]=arr[i];
                        flag=0;
                        break;
                    }
                }
            }
        }
    }
    do
    {
        printf("\nEnter value to be searched\n");
        scanf("%d",&ser);
        temp=(ser%10);
        for(int k=0;k<10;k++)
        {
            if(hash[temp]==ser)
            {
                printf("\nNumber present in the sequence\n");
                flag=1;
                break;
            }
            else if(temp==9)
            {
                temp=0;
            }
            else
                temp++;
        }
        if(flag==0)
            printf("\nNumber not present in the sequence\n");
        printf("\nWant to search more?\n");
        printf("\n1.Yes\t2.No\n");
        scanf("%d",&ans);
    }while(ans!=2);
    return 0;
}
