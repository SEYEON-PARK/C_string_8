#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30] = "�ȳ��ϼ���.", b[30] = "�ȳ�";
	printf("%d\n", strstr(a, b));

	return 0;
}