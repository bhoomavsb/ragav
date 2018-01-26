#include <stdio.h>
 
int main(void)
{
	int k=65;
	int i=120;
	printf("value of i=%d\n and k=%d\n before swap",k,i);
	k=k^i;
	i=k^i;
	k=k^i;
	printf("value of i=%d\n,k=%d\n after swap",k,i);
 
	// your code goes here
	return 0;
}
