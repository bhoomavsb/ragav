#include <stdio.h>

int main(void)
{
	int i,n,a=0;
	scanf("%d",&n);
	printf("the number is %d\n",n);
	for(i=1;i<=n;i++)
	{
		a=(a+i);
	   }
		a=a/n;
		printf("the average is %d\n",a);
	
	return 0;
}
