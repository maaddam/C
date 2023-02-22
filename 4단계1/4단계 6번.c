#include <stdio.h>

int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);

	int X[100] = { 0 };
	int i, j, k;

	for (k = 0; k < N; k++)
	{
		X[k] = k + 1;
	}

	for (k = 0; k < M; k++)
	{
		scanf("%d %d", &i, &j);
		int m = X[i - 1];
		int n = X[j - 1];

		X[i - 1] = n;
		X[j - 1] = m;
	}

	for (k = 0; k < N; k++)
	{
		printf("%d ", X[k]);
	}

	return 0;
}