#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct pt
{
    double x;
    double y;
};
void distance(struct pt *p,int n,int nr);
void main()
{
    int n;

    struct pt *p;
    printf("\nEnter number of points\n");
    scanf("%d",&n);
    p=(struct pt *)malloc(n*sizeof(struct pt));
    int i,nr=1;
    for(i=1;i<n;i++)
        nr*=i;
    printf("\nEnter elements\n");
    for(i=0;i<n;i++)
    {
        printf("\nEnter Point %d",i+1);
        scanf("%l %l",&((p+i)->x),&((p+i)->y));
    }
    distance(p,n,nr);
}
void distance(struct pt *p,int n,int nr)
{
    int i,j;
    double *f;
    f=(double *)malloc(nr*sizeof(double));
    for(i=0;i<n-1;i++)
    {
        j=i+1;
        for(;j<n;j++)
        {
            f=sqrt(pow((((*(p+i)).x)-((*(p+j)).x)),2)+pow((((*(p+i)).y)-((*(p+j)).y)),2));
            f++;
        }
    }
    double small;
    int pos;
    small=(*(f-nr-1));
    pos=0;
    for(i=1;i<nr;i++)
    {
        if(small>(*(f+i)))
        {
            small=*(f+i);
            pos=i;
        }
    }
    printf("\nThe smallest distance is: %l\n",small);

}

