#include<stdio.h>
#include<math.h>
void main()
{
int p,t;
float emi,r,x,z,y;
printf("enter the values of p,r,t\n");
scanf("%d %f %d",&p,&r,&t);
x=t*12;
y=r/(100*12);
z=pow((1+y),x);
emi=(p*y*z)/(z-1);
printf("z=%f\n",z);
printf("y=%f\n",y);
printf("x=%f\n",x);
printf("emi=%f\n",emi);
}
