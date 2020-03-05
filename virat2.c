#include<stdio.h>
void main()
{
float a,b,c,d,e,total, avg;
char h;
printf("enter the name of the student");
scanf("%s",&h);
printf("enter the marks of the student");
scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
total=a+b+c+d+e;
avg=a+b+c+d+e/5;
printf("the total marks if the student is:%f\n",total);
printf("the avg of the student is:%f",avg);
}

