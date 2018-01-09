#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
printf("enter the year:%d",n);
if(n%400==0)
{
printf("leap year");
else
{
printf("not a leap year");
}
}
}
