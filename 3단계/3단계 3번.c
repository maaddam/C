#include <stdio.h>

int main(void)
{
	int n,i,s;
	scanf("%d", & n);
	int j = 0;

	for (i = 0; i <= n; i++)
	{
		s = j + i;
		j += 1;
	}

	printf("%d", s);
	return 0;
}