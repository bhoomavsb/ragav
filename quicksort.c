#include <stdio.h>
void quicksort(int n[25],int a,int b)
{
	int i,j,p,tmp;
	if(a<b)
	{
		p=a;
		i=a;
		j=b;
		while(i<j)
		{
			while(n[i]<=n[p]&&i<b)
			i++;
			while(n[j]>n[p])
			j--;
			if(i<j)
			{
				tmp=n[i];
				n[i]=n[j];
				n[j]=tmp;
			}
		
			}
		tmp=n[p];
		n[p]=n[j];
		n[j]=tmp;
		quicksort(n,a,j-1);
		quicksort(n,j+1,b);
		
	}
	
}
