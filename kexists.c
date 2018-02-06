#include <stdio.h>

int main(void)
{
	int n,k,a[10],i,b;
	scanf("%d %d",&n,&k);
	printf("The given two numbers n and k are:%d and %d\n",n,k);
	scanf("%d",&b);
	for(i=0;i<=b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=b;i++)
	{
	if(a[i]==k)
	{
		printf("K exists");
	}
	}
	return 0;
}
