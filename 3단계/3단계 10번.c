#include <stdio.h>

int main(void)
{
	int i, A, B;
	i = 1;

	while (i > 0)
	{
		scanf("%d %d", &A, &B);
		if ((A != 0) || (B != 0))
		{
			printf("%d", A + B);
			i += 1;
		}
		else
		{
			i = 0;
		}
		
	}

	return 0;
}