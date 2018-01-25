#include <stdio.h>

int main(void)
{
	char a[30]
	int i;
	int f=0;
	scanf("%s",&a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7')
		{
			f=f+1;
			
		}
	}
	if(f==1)
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
		
	}
	return 0;
}
