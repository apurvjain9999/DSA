#include<stdio.h>
#include<math.h>
void main()
{ float small,d;
  int n,i,j,k,a[10],b[10],x1,x2,y1,y2;
  printf("Enter the no. of points\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
 { printf("\nEnter the x and y coordinates of point %d\n",i+1);
   scanf("%d%d",&a[i],&b[i]);
   }

printf("\nDistances between each point wrt to another\n");
small=sqrt((pow((a[1]-a[0]),2))+(pow((b[1]-b[0]),2)));
for(i=0;i<n-1;i++)
{ for(j=i+1;j<n;j++)
   { d=sqrt((pow((a[j]-a[i]),2))+(pow((b[j]-b[i]),2)));
   printf("%f\n",d);  
   if(small>d)
     {  small=d;  
        x1=a[i];
        x2=a[j];
        y1=b[i];
        y2=b[j];
            } 
     }
}

printf("\nSmallest distance between two points in 2d plane is %f",small);
printf("\n\nClosest points are (%d,%d) and (%d,%d)",x1,y1,x2,y2);

}
