#include<stdio.h>
void main()
{
int num,digit,temp,count=0;sum=0;
scanf("%d",&num);
while(num>=1)
{
temp=num;
digit=temp%10;
sum=sum+digit;
num=temp/10;
count++;
}
printf("count =%d",count);
}


