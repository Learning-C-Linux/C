#include <stdio.h>
int main()
{
	int a=10;
	char *ptr=(char*)&a;
	if(*ptr)
	{
		printf("little endian\n");
	}
	else
	{
		printf("big endian\n");
	}
	return 0;
}


