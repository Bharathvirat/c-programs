#include<stdio.h>
int main()
{
int a, b, c;
int ch;
printf("enter the value of a and b");
scanf("%d %d",&a,&b);
printf("enter choise");
scanf("%d",&ch);
switch(ch)
{
case 1:c=a+b; 
printf("sum=%d\n",c);
break;
case 2:c=a-b; 
printf("sub=%d\n",c);
break;
case 3:c=a*b; 
printf("multi=%d\n",c);
break;
default:
printf("invalid operation");
}
}
