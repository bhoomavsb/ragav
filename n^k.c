#include <stdio.h>

int main(void)
{
	int i,power,a,b;
	scanf("%d %d",&a,&b);
	power=1;
	for(i=1;i<=b;i++)
	{
		power=power*a;
	}
	
	printf("%d",power);
	
	return 0;
}
