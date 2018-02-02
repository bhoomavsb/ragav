#include <stdio.h>

int main(void)
{
	char a[10];
	scanf("%s",&a);
	if((a[10]>='a')||(a[10]<='z')||(a[10]>='A')||(a[10]<='Z')||(a[10]>='0')||(a[10]<='9'))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;
}
