#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the values:");
	scanf("%d %d",&a,&b);
	if((a^b)==0)
	{
		printf("both are equal");
	}
	else
	{
		printf("Not equal");
	}
	return 0;
}
