#include <stdio.h>

int main(void)
{
	int first,diff,terms,value,sum=0,i;
	scanf("%d",&terms);
	scanf("%d %d",&first,&diff);
	value=first;
	printf("ap series");
	for(i=0;i<terms;i++)
	{
		printf("%d",value);
		sum+=value;
		value=value+diff;
	}
	
}
