/*With Collision*/
#include<stdio.h>
struct hash
{
    int data;
    struct hash *link;
}h[10];
struct hash *first[10];
int main()
{
    int arr[20];
    printf("\nEnter 20 numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<20;i++)
    {
        temp=(arr[i]%20);

        h[temp]->data=arr[i];
    }

}
