# ragav
#include<stdio.h>
void main()
{
int num,temp,dig,sum=0;
scanf("%d",&num);
while(num>=1)
{
temp=num;
dig=temp÷10;
sum=sum+dig*dig*dig;
num=temp/10;
}
printf("%d",sum);
}
