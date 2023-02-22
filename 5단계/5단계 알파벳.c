#include <stdio.h>

int main(void)
{
	char s[100];
	char a[26] = { -1 };
	int i,j;
	
	scanf("%s", &s);

	for (i = 0; i < 26; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (s[i] == j)
			{
				a[i] += (i+1);
			}
		}
	}

	for (i = 0; i < 26; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}