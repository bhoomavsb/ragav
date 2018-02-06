#include <stdio.h>
 
int main(void)
{
	int a,n,fact=1;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		fact=fact*a;
	}
	printf("%d",fact);
	return 0;
}
 
