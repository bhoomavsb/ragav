#include <stdio.h>
int main(void)
{
	int n,k,a[10],i,b,count=0;
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
	count++;
	}
	}
		printf("%d",count);
		
	return 0;
}
