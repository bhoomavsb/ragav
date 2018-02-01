#include <stdio.h>

int main(void)
{
	int hr1,hr2,m1,m2,hour,min;
            scanf("%d %d",&hr1,&m1);
            scanf("%d %d",&hr2,&m2);
         hour=(hr1-hr2);
         min=(m1-m2);
         
          	printf("%d:%d",hour,min);
	return 0;
}
