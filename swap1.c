#include <stdio.h>

int main(void) 
{
	int m,n,tem;
	printf("enter the number:");
	scanf("%d %d",&m,&n);
	printf("first number:%d and second number:%d",m,n);

	tem=m;
	m=n;
	n=tem;
printf("after swap");
printf("frist num:%d and second num:%d",m,n);
	// your code goes here
	return 0;
}
