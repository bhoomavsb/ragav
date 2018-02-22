#include <stdio.h>
#include<string.h>
int main(void) 
{
char s1[20],s2[20];
int n;
scanf("%s",s1);
strcpy(s2,s1);
strrev(s1);
n=strcmp(s1,s2);
if(n==0)
{
	printf("Palindrome");
}
else
{
	printf("Not a palindrome");
}


	return 0;
}
