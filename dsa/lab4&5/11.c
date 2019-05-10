#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void distance(int *,int *,int,int);
int main()
{
int n,*x,*y,i,nr=1;
printf("Enter the number of co-ordinates you would like to insert : ");
scanf("%d",&n);
x=(int *)malloc(n*sizeof(int));
y=(int *)malloc(n*sizeof(int));
for(i=1;i<n;i++)
nr=nr*i;
printf("\n Enter the x and y co-ordinate \n");
for(i=0;i<n;i++)
{
  printf("%d \n",i+1);
  scanf("%d%d",&x[i],&y[i]);
  printf("\n\n");
}
distance(x,y,n,nr);
free(x);
free(y);
return 0;
}
void distance(int *x,int *y,int n,int nr)
{
int i,j,k=0;
float *f,t;
f=(float *)malloc(nr*sizeof(float));
for(i=0;i<(n-1);i++)
{
  j=i+1;
  for(;j<n;j++)
  {
    f[k]=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
    k++;
  }
}
t=f[0];
for(i=1;i<nr;i++)
{
  if(t>f[i])
  t=f[i];
}
printf("\n Smallest distance is : %f ",t);
k=0;
for(i=0;i<(nr-1);i++)
{
  j=i+1;
  for(;j<nr;j++)
  {
    f[k]=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
    if(f[k]==t)
    {
     printf("\n Closest pairs are : (%d,%d) and (%d,%d)",x[i],y[i],x[j],y[j]);
     break;
    }
    k++;
  }
}
free(f);
}
