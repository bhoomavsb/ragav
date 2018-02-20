#include <stdio.h>

int main(void)
{
	int n,k,i,t,j,m,a[50];
	scanf("%d %d",&n,&k);
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=1;i<=m;i++)
	{
	for(j=1;j<=m;j++)
	{
		if((a[i]%2==1)==k)
		{
			
		}
	}
	
}
printf("Kth odd number is %d",a[k]);	
	return 0;
}
