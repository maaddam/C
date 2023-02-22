#include <stdio.h>

int main(void)
{
	int N, M;
	int X[100] = { 0 };
	scanf("%d %d", &N, &M);
	
	int a, i, j, k;

	for (a = 0; a < M; a++)
	{
		scanf("%d %d %d", &i, &j, &k);
		
		for (i; i <= j; i++)
		{
			X[i - 1] = k;
		}
	}
	
	for (a = 0; a < N; a++)
	{
		printf("%d ", X[a]);
	}

	return 0;
}