#include <stdio.h>

int main(void)
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a*b;
	if(c/a==a)
	{
		printf("%d is a perfect square\n",c);
	}
	else
	{
		printf("%d is not a perfect square\n",c);
	}
	return 0;
}
