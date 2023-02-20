#include <stdio.h>

int main(void)
{
	int N,i;
	int s[10000];
	int max=0, min=0;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &s[i]);
	}

	for (i = 0; i < N; i++)
	{
		if (s[i] < s[i + 1])
		{
			max = s[i + 1];
		}
		else
		{
			min = s[i];
		}
	}
	printf("%d %d", min, max);

	return 0;
}