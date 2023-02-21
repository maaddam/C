#include <stdio.h>

int main(void)
{
	int N[10];
	int X[10];
	int i;
	int count;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &N[i]);
	}

	for (i = 0; i < 10; i++)
	{
		X[i] == N[i] % 42;
		
		for (int j = 0; j < 10; j++)
		{
			count = 0;
			if (X[j] != X[i + 1])
			{
				count += 1;
			}
		}
		
	}
	
	printf("%d", count);
	return 0;
}