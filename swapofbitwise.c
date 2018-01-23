#include <stdio.h>
 
int main(void)
{
	int i=65;
	int k=120;
	printf("value of i=%d\n and k=%d\n before swap",i,k);
	i=i^k;
	k=i^k;
	i=i^k;
	printf("value of i=%d\n,k=%d\n after swap",i,k);
 
	// your code goes here
	return 0;
}
