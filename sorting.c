#include <stdio.h>

int main(void)
{
	int a1[100];
	int n,i,j,tmp;
	scanf("%d",&n);
	printf("%d",n);
	for(i=0;i<n;i++)
	{
		printf("%d",i);
		scanf("%d",&a1[i]);
	
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a1[j]<a1[i])
			{
				tmp=a1[i];
				a1[i]=a1[j];
				a1[j]=tmp;
				
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a1[i]);
	}
	// your code goes here
	return 0;
}
