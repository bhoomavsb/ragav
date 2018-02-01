#include <stdio.h>

int main(void)
{
int a[10],i,j,t,n;
scanf("%d\n",&n);
for(i=0;i<=n;i++)
{
	scanf("%d\t",&a[i]);
}
for(i=1;i<=n;i++)
{
	for(j=i+1;j<=n;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	
}
printf("%d",a[n]);

	return 0;
}
