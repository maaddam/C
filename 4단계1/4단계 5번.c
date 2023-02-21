#include <stdio.h>

int main(void)
{
	int i, num;
	int n[28];
	int a[30]

	for (i = 0; i < 28; i++)
	{
		scanf("%d", &n[i]);
	}
	
	num = 1;
	for (i = 0; i < 28; i++)
	{
		while (num <= 30)
		{
			if (num != n[i])
			{
				a[i] == num;
				num += 1;
			}
			
			else
			{
				a[i] == 0;
			}
		}
	}

	return 0;
}