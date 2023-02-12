#include <stdio.h>

int main(void)
{
	int N, i, count1, count2;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		for (count1 =N;count1>i; count1--)
		{
			printf(" ");
		}
		
		for (count2 = 0; count2 < i; count2++)
		{
			printf("*");
		}

		printf("*\n");
	}

	return 0;
}