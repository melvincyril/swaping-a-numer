#include<stdio.h>
#include<stdbool.h>
main()
{
printf("the two numbers are ");
float a,b,c,d;
scanf("%f",&a);
scanf("%f",&b);
c=a+b-a;
d=b+a-b;

printf("the swapped number is %f and %f",c,d);
}
