#include <stdio.h>

int main(void)
{
	int ary[100];
	int i,N,v;
	int count = 0;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &ary[i]);
	}
	
	scanf("%d", &v);

	for (i = 0; i < N; i++)
	{
		if (ary[i] == v)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}