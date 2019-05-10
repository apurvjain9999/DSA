#include<stdio.h>
#include<math.h>
int main(){
int i,j,a,b,p,q,r,arrx[5],arry[5];
for(i=0;i<=4;i++){
a=i+1;
printf("x%d=",a);
scanf("%d",&arrx[i]);
printf("\n y%d=",a);
scanf("%d",&arrx[i]);
}
printf("refrence is first point");
for(i=1;i<=4;i++){
p=(arrx[0]-arrx[i])*(arrx[0]-arrx[i]);
q=(arry[0]-arry[i])*(arry[0]-arry[i]);
r=p+q;
j=sqrt(r);
b=i;
printf("distance b/w x1 and x%d=%d",b,j);
}
return 0;
}
