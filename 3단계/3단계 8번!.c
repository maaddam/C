#include <stdio.h>

int main(void)
{
	int N, i,count;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		for (count = 0; count < i; count++)
		{
			printf("*");
			
		}
		printf("*\n");
	}

	return 0;
}