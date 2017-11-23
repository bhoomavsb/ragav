# ragav
#include<stdio.h>
void main()
{
int dig,num,temp,sum;
scanf("%d",&num);
while(num>=1)
{
temp=num;
dig=temp÷10;
sum=sum*10+dig;
num=temp/10;
}
printf("%d",sum);
if(sum==num)
{
printf("palindrome");
}
else
printf("not")
}
