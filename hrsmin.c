#include <stdio.h>

int main(void)
{
int min,hrs,m1;
scanf("%d\n",&min);
m1=min%60;
hrs=min/60;
printf("%d:%d",hrs,m1);
	return 0;
}
