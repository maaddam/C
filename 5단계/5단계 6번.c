#include <stdio.h>

int main(void)
{
	char s[20] = { 0 };
	int t, r;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %s", &r, s);
		
		for (int j = 0; j < 20; j++)
		{
			if (s[j] != 0)
			{
				for (int k = 0; k < r; k++)
				{
					printf("%c", s[j]);
				}	
			}
		}
	}
	return 0;
}