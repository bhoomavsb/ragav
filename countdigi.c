#include <stdio.h>

int main(void)
{
int n,d,t,s=0,c=0;
scanf("%d",&n);
while(n>=1)
{
	t=n;
	d=t%10;
	s=s+d;
	n=t%10;
	c++;
	
}

printf("c=%d\n",c);
// your code goes here
	return 0;
}
