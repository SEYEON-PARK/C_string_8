#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30] = "æ»≥Á«œººø‰.", b[30] = "æ»≥Á";
	printf("%d\n", strstr(a, b));

	return 0;
}