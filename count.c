# ragav
#include<stdio.h>
void main()
{
int num,dig,temp,count=0,sum=0;
scanf("%d",&num);
while(num>=1)
{
temp=num;
dig=temp÷10;
sum=sum+dig;
num=temp/10;
count++;
}
printf("count=%d",count);
}
