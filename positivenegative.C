#include<stdio.h>
void main()
{
int x;
printf("Enter The Value of x:");
scanf("%d",&x);
if(x<=0)
{
if(x==0.0)
{
printf("The number is zero");
}
else
{
printf("The number is Negative");
}
}
else
{
printf("The number is positive");
}
}
