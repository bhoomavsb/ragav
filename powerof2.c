#include <stdio.h>
 
int main(void) 
{
	int a,i,n;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		a=2^i;
	}
	printf("%d\n",a);
	if(a%2==0)
	{
	printf("yes");	
	}
	// your code goes here
	return 0;
}
 
