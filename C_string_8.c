#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30] = "안녕하세요.", b[30] = "안녕";
	printf("%d\n", strstr(a, b));

	return 0;
}
