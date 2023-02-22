#include <stdio.h>

int main(void)
{
	char S[20] = { 0 };
	char P[80] = { 0 };
	int R;
	int T;
	int i;

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d %s", &R, &S);
		int len = strlen(S);
		for (i = 0; i < R;i++)
		{
			for (int j = 0; j < len; j++)
			{
				P[j] = S[j];
			}
			printf("%s", &P[i]);
		}
	}
	
	return 0;
}