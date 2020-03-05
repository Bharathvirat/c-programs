#include <stdio.h>
 void main()
{
int a,b,c;
printf("to find the greatest of a,b,c numbers");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is greater\n");
}
else if(b>a&&b>c)
{
printf("b is greater\n");
}
else
{
printf("c is greater");
} 
}

