#include <stdio.h>

int main(void)
{
	int A, B, C;
	scanf("%d %d \n", &A, &B);
	scanf("%d",& C);

	if ((B + C) < 60)
	{
		printf("%d %d", A, B + C);
	}
	else if ((B + C) < 120)
	{
		if (A < 23)
		{
			printf("%d %d", A + 1, (B + C) - 60);
		}
		else
		{
			printf("%d %d", 0, (B + C) - 60);
		}
	}
	else
	{
		if (A < 22)
		{
			printf("%d %d", A + 2, (B + C) - 120);
		}
		else
		{
			printf("%d %d", 0, (B + C) - 60);
		}

	}
		return 0;

}