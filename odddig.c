#include <stdio.h>
int main(void) 
{
	int n,dig;
	scanf("%d",&n);
while(n!=0)
{
	dig=n%10;
	if(dig%2==1)
	printf("%d",dig);
	n/=10;
}
	return 0;
}
