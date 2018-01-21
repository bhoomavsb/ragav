#include <stdio.h>

int main(void)
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
c=a-b;
printf("c=%d\n",c);
if(c%2==0)
{
	printf("even\n");

}
else
{
	printf("odd\n");
}
	return 0;
}
