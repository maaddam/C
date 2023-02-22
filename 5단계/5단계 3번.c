#include <stdio.h>


int legth(char(data[]))
{
	int count = 0;
	while (data[count] != 0)
	{
		count++;
	}
	return count;
}

int main(void)
{
	int T;
	int i;
	int m;
	char str[1000] = { 0 };
	char first, last;

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%s", str);
		m = length(str);
		first = str[0];
		last = str[m- 1];
		printf("%c%c\n", first, last);
	}

	return 0;
}