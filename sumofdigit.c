#include<stdio.h>
voidmain()
{
long int digit,temp,sum=0;
scanf("%d",&num);
while(num>=1)
{
temp=num;
digit=temp%10;
sum=sum+digit;
num=temp/10;
}
printf("%d",sum);
}
