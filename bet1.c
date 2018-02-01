#include <stdio.h>
 
int main(void)
{
	int a,b,c;
	scanf("%d\n",&c);
	scanf("%d %d",&a,&b);
	if((c>=a)&&(c<=b))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
