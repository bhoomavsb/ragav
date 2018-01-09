#include<stdio.h>
void main()
{
int a,b,n,i,sum=0;
scanf("%d %d %d",&a,&b,&n);
for(i=0;i<n;i++)
{
sum=sum+a;
}
a=b;
b=sum;
printf("sum=%d",sum);
}

