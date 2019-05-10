#include<stdio.h>
#include<math.h>
struct pt
{
    float x;
    float y;
};
float dist(struct pt p1,struct pt p2)
{
    float dis;
    dis=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
    return dis;
}
int main()
{
    struct pt p[3];
    float dis[3];
    int i;
    int j,k;
    printf("Enter any 3 points in X-Y plane\n");
    for(i=0;i<3;i++)
    {
        printf("\nEnter point %d\n",i+1);
        printf("\nEnter X\n");
        scanf("%f",&p[i].x);
        printf("\nEnter Y\n");
        scanf("%f",&p[i].y);
    }
    dis[0]=dist(p[0],p[1]);
    dis[1]=dist(p[1],p[2]);
    dis[2]=dist(p[0],p[2]);
    float small=dis[0];
    for(i=1;i<3;i++)
    {
        if(dis[i]<small)
            small=dis[i];
    }
    printf("The smallest distance between any two points is %f",small);
    return 0;
}
