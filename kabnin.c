#include <stdio.h>

int main(void) 
{
int kabali,ninja,n;
scanf("%d\n",&n);
for(int i=0;i<n;i++)
{
scanf("%d %d",&kabali,&ninja);	
printf("the difference is %d\n",ninja-kabali);	
}
	return 0;
}
