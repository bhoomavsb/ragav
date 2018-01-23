#include <stdio.h>

int main(void)
{
	int num,temp,sum=0,i,j,digit;
	scanf("%d %d",&i,&j);
	printf("the armstrong number between two intervals of %d and %d:\n",i,j);
	scanf("%d",&num);

	while(num>=1)
	{
		
		temp=num;
		digit=temp%10;
		sum=sum+digit*digit*digit;
		num=temp/10;
		
	
	}
	
	
	printf("%d\n",sum);
	
	// your code goes here
	return 0;
}
