#include <stdio.h>

int main(void) 
{
	int n1,n2,tem;
	printf("enter the number:");
	scanf("%d %d",&n1,&n2);
	printf("first number:%d and second number:%d",n1,n2);

	tem=n1;
	n1=n2;
	n2=tem;
printf("after swap");
printf("frist num:%d and second num:%d",n1,n2);
	// your code goes here
	return 0;
}
