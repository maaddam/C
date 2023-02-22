#include <stdio.h>

int main(void)
{
	int N;
	char num[100];
	int total = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%c", &num[i]);
		total += num[i];
	}

	printf("%d", total);
	return 0;
}