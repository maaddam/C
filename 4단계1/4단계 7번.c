#include <stdio.h>

int main(void)
{
	int n[30] = { 0 };
	int m[30];
	int i;

	for (i = 0; i < 30; i++)
	{
		n[i] = i + 1;
	}

	for (i = 0; i < 28; i++)
	{
		scanf("%d", &m[i]);
	}

	for (i = 0; i < 28; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (m[i] == n[j])
			{
				n[j] = -1;
			}
		}
	}

	for (i = 0; i < 30; i++)
	{
		if (n[i] != -1)
		{
			printf("%d\n", n[i]);
		}
	}
	
	return 0;
}