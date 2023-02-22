#include <stdio.h>

int main(void)
{
	int N, i;
	double max;
	double total = 0;
	double avg;
	int S[1000] = { 0 };

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d",&S[i]);
	}

	max = S[0];
	for (i = 0; i < N; i++)
	{
		if (S[i] >= max)
		{
			max = S[i];
		}
	}

	for (i = 0; i < N; i++)
	{
		S[i] = (S[i] / max) * 100;
		total += S[i];
	}

	avg = total / N;
	printf("%.1lf", avg);
	return 0;
}