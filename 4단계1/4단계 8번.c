#include <stdio.h>

int main(void)
{
	int N[10] = { 0 };
	int M[10] = { 0 };
	int count = 10;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &N[i]);
		M[i] = N[i] % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i != j)
			{
				if (M[i] == M[j])
				{
					count -= 1;
				}
			}
		}
	}

	printf("%d", count);
	return 0;
}