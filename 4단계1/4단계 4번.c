#include <stdio.h>

int main(void)
{
	int i, t = 0;
	int n[100];

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &n[i]);
	}

	int max;
	max = n[0];

	for (i = 0; i < 9; i++)
	{
		if (max < n[i])
		{
			max = n[i];
			t = i + 1;
		}
	}

	printf("%d\n", max);
	printf("%d", t);
	return 0;
}



