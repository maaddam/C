#include <stdio.h>

int main(void)
{
	int X, N, a, b;
	scanf("%d\n", &X);
	scanf("%d\n", &N);

	
	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		X -= a * b;
	}
	
	if (X == 0)
	{
		printf("yes");
	}

	else
	{
		printf("no");
	}

	return 0;

}