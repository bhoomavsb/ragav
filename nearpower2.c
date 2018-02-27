#include <stdio.h>
#include<math.h>
int main(void) 
{
int a,b,c,d,n,i;
scanf("%d %d",&a,&n);
for(i=1;i<n;i++)
{
	b=pow(2,i);
	if(b>a)
	{
		c=i;
		break;
	}
}
d=pow(2,c);
printf("%d",d);
	return 0;
}
