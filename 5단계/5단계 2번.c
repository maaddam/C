#include <stdio.h>

int main(void)
{
	char n[100];
	int count = -2;

	for (int i = 0; i < 100; i++)
	{
		n[i] = -1;
	}

	scanf("%s", n);
	
	for (int i = 0; i < 100; i++)
	{
		if (n[i] != -1)
		{
			count += 1;
		}
	}

	printf("%d",count);
	return 0;

}